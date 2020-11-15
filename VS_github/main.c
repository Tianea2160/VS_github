#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<stdbool.h>
#include <conio.h>

#include"Console.h"
#include"title_and_image.h"


#define SIZE_MAXRL 135
#define SIZE_MAXUD 37

#define MINRL 42
#define MINUD 1

#define MAXRL 130
#define MAXUD 33

#define MAX 3


void view_cusor_position(int x, int y, bool act) {
	if (act) {
		GotoXY(115, 34);
		printf("x : %d, y : %d", x, y);
	}
}

void text_entry(int x, int y) {
	char a_input[100];
	bool act_print = true;

	fseek(stdin, 0, SEEK_SET);

	while (act_print) {
		fgets(a_input, sizeof(a_input), stdin);

		for (int a = 0; a < strlen(a_input); a++) {
			if (a_input[a] == '\n') {

				GotoXY(x, y);
				act_print = false;
			}
		}
		Sleep(25);
	}

}


int main(void) {
	int num = 1;
	bool act_print = false;
	char a_input[100];

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
			if (GetAsyncKeyState(VK_CONTROL) & 0x8000) { //컨트롤로 텍스트 입력 받음
				if (act_print == true) {
					act_print = false;
				}
				else {
					act_print = true;
				}
			}
			GotoXY(x, y);
		}
		

		//컨트롤로 텍스트 입력
		if (GetAsyncKeyState(VK_CONTROL) & 0x8000) {
			text_entry(x, y);
		}

		view_cusor_position(x, y, true);
		GotoXY(x, y);
		Sleep(50);
		
		if (GetAsyncKeyState(VK_BACK) & 0x8000) { //Backspace로 되돌리기 기능
			for (int i = 0; i < 5; i++)
			{
				GotoXY(x, y + i);
				printf("             \n");
			}

		}
	}
	
	system("pause");
	return 0;
}
