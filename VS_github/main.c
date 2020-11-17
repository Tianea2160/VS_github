#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<stdbool.h>
#include <conio.h>

#include"Console.h"
#include"title_and_image.h"
#pragma warning (disable :6054)


//콘솔창의 범위
#define SIZE_MAXRL 130
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
#define MAX 12
int size = 0;



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
	PrintAllLine();
	PreimagePrint();
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
			
			if (ST_images.act == true) {
				switch (num) {
				case 1:
					print_line1(ptr_images);
					break;
				case 2:
					print_line2(ptr_images);
					break;
				case 3:
					print_line3(ptr_images);
					break;
				case 4:
					print_line4(ptr_images);
					break;
				case 5:
					print_line5(ptr_images);
					break;
				case 6:
					print_line6(ptr_images);
					break;
				case 7:
					print_line7(ptr_images);
					break;
				case 8:
					print_line8(ptr_images);
					break;
				case 9:
					print_line9(ptr_images);
					break;
				case 10:
					print_line10(ptr_images);
					break;
				case 11:
					print_line11(ptr_images);
					break;
				case 12:
					print_line12(ptr_images);
					break;
				}
				ST_images.act = false;
			}
			//shift로 이미지 선택
			if (GetAsyncKeyState(VK_SHIFT) & 0x8000) {
				num++;
				Sleep(25);
				GotoXY(123, 2);
				printf("%2d", num);
				if (num > MAX) {
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
				for (int i = 0; i < 5; i++){
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
