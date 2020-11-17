#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<stdbool.h>
#include <conio.h>

#include"Console.h"
#include"title_and_image.h"
#pragma warning (disable :6054)


//콘솔창의 범위
#define SIZE_MAXRL 123
#define SIZE_MAXUD 50


//마우스가 움직일수 있는 값의 범위
/*
#define MINRL 36
#define MINUD 1

#define MAXRL 130
#define MAXUD 35
*/
#define MINRL 0
#define MINUD 0

#define MAXRL 123
#define MAXUD 50

//이미지 개수
#define MAX 3
int size = 0;

void view_cusor_position(int x, int y, bool act) {
	if (act) {
		GotoXY(106, 35);
		printf("x : %d, y : %d", x, y);
	}
}


void text_entry(int x, int y) {
	char a_input[100];
	bool act_print = true;
	int key, size;

	while (act_print) {

		if (_kbhit()) {
			key = _getch();
			if (key == 13) 
				fgets(a_input, 100, stdin);
		}
		size = strlen(a_input);
		for (int a = 0; a < size; a++) {
			if (a_input[a] == '\n') {
				//a_input 초기화
				for (int a = 0; a < size; a++)
					a_input[a] = 0;
				GotoXY(x, y);
				act_print = false;
			}
		}
		
		Sleep(25);
	}

}

void guide(void) {
	int key;
	system("cls");
	
	// 한글로 바꾸면 오류남
	printf("Guide\nEnter to Start");

	while (1) {
		if (_kbhit()) {
			key = _getch();
			if (key == 13)
				break;
		}
	}
}

int main(void)
{
	guide();
	system("cls");

	int num = 1;
	bool act_print = false;

	ST_ImagePrint ST_images = { 0,0,false };
	ST_ImagePrint* ptr_images = &ST_images;

	int x = 42, y = 1;
	SetConsoleSize(SIZE_MAXRL, SIZE_MAXUD);
	printallline();
	SetCursorVisible(true);

	while (1) {

		if (_kbhit()) {
			//방향키 설정
			if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
				x--;
				if (x < MINRL)x = MINRL;
			}
			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
				x++;
				if (x > MAXRL)x = MAXRL;
			}
			if (GetAsyncKeyState(VK_UP) & 0x8000) {
				y--;
				if (y < MINUD)y = MINUD;
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
				y++;
				if (y > MAXUD)y = MAXUD;
			}
			for (int a = 0; a < 5; a++) {
				if (ST_images.act == true) {
					if (num == 1) {
						printbaby(ptr_images);
					}
					if (num == 2) {
						printrabbit(ptr_images);
					}
					ST_images.act = false;
				}
			}

			//shift로 이미지 선택
			if (GetAsyncKeyState(VK_SHIFT) & 0x8000) {
				num++;
				Sleep(50);
				if (num == MAX) {
					num = 1;
				}
			}

			//스페이스로 이미지 출력 명령
			if (GetAsyncKeyState(VK_SPACE) & 0x8000) {
				ST_images.x = x;
				ST_images.y = y;
				ST_images.act = true;
				Sleep(50);
			}

			//엔터로 텍스트 입력
			if (GetAsyncKeyState(VK_RETURN) & 0x8000) {
				text_entry(x, y);
			}

			//Backspace로 되돌리기 기능
			if (GetAsyncKeyState(VK_BACK) & 0x8000) { 
				for (int i = 0; i < 5; i++)
				{
					GotoXY(x, y + i);
					printf("         ");
				}
			}
			GotoXY(x, y);
		}
		

		view_cusor_position(x, y, true);
		GotoXY(x, y);
		Sleep(50);
		
		
	}
	system("pause");
	return 0;
}
