#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<stdbool.h>
#include <conio.h>


#include"Console.h"
#include"title_and_image.h"
#pragma warning (disable :6054)


//콘솔창의 범위
#define SIZE_MAXRL 145
#define SIZE_MAXUD 47


//마우스가 움직일수 있는 값의 범위
/*
#define MINRL 36
#define MINUD 1

#define MAXRL 120
#define MAXUD 35
*/
#define MINRL 36
#define MINUD 2

#define MAXRL 120
#define MAXUD 35

//이미지 개수
#define MAX 14
int size = 0;



int main(void)
{
	//가이드 내용 추가적으로 수정 필요
	guide();
	system("cls");

	int num = 1;
	bool act_print = false;

	ST_ImagePrint ST_images = { 0,0,false };
	ST_ImagePrint* ptr_images = &ST_images;

	int x = 36, y = 2;
	SetConsoleSize(SIZE_MAXRL, SIZE_MAXUD);
	PrintAllLine();
	PreimagePrint();
	SetCursorVisible(true);
	//first image num print
	GotoXY(123, 2);
	printf("image number:%2d", num);
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
					if (ST_images.x + 9 < MAXRL)
						print_line1(ptr_images);
					break;
				case 2:
					if (ST_images.x + 11 < MAXRL)
						print_line2(ptr_images);
					break;
				case 3:
					if (ST_images.x + 10 < MAXRL)
						print_line3(ptr_images);
					break;
				case 4:
					if (ST_images.x + 16 < MAXRL)
						print_line4(ptr_images);
					break;
				case 5:
					if (ST_images.x + 25 < MAXRL)
						print_line5(ptr_images);
					break;
				case 6:
					if (ST_images.x + 24 < MAXRL)
						print_line6(ptr_images);
					break;
				case 7:
					if (ST_images.x + 12 < MAXRL)
						print_line7(ptr_images);
					break;
				case 8:
					if (ST_images.x + 12 < MAXRL)
						print_line8(ptr_images);
					break;
				case 9:
					if (ST_images.x + 6 < MAXRL)
						print_line9(ptr_images);
					break;
				case 10:
					if (ST_images.x + 9 < MAXRL && ST_images.y + 1 < MAXUD)
						print_line10(ptr_images);
					break;
				case 11:
					if (ST_images.x + 12 < MAXRL && ST_images.y + 3 < MAXUD)
						print_line11(ptr_images);
					break;
				case 12:
					if (ST_images.x + 14 < MAXRL && ST_images.y + 1 < MAXUD)
						print_line12(ptr_images);
					break;
				case 13:
					if (ST_images.x + 16 < MAXRL && ST_images.y + 4 < MAXUD)
						print_line13(ptr_images);
					break;
				case 14:
					if (ST_images.x + 16 < MAXRL && ST_images.y + 1 < MAXUD)
						print_line14(ptr_images);
					break;
				}
				ST_images.act = false;
			}
			//shift로 이미지 선택
			if (GetAsyncKeyState(VK_SHIFT) & 0x8000) {
				num++;
				Sleep(50);
				GotoXY(123, 2);
				if (num > MAX) {
					num = 1;
				}
				printf("image number:%2d", num);
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
		view_cusor_position(x, y, false);
		GotoXY(x, y);
		Sleep(50);
	}
	system("pause");
	return 0;
}
