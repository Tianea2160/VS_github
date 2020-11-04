#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<stdbool.h>

#include"Console.h"
#include"title_and_image.h"


#define SIZE_MAXRL 135
#define SIZE_MAXUD 37

#define MINRL 42
#define MINUD 1

#define MAXRL 130
#define MAXUD 33

#define MAX 3

//hello world!

int main(void) {
	int num = 1;
	int b = 0;
	ST_ImagePrint images = { 0,0,false };
	int x = 42, y = 1;
	SetConsoleSize(SIZE_MAXRL, SIZE_MAXUD);
	printallline();

	
	while (1) {
		
		SetCursorVisible(true);
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
			if (images.act == true) {
				if (num == 1) {
					printbaby(images);
				}
				if (num == 2) {
					printrabbit(images);
				}
				images.act = false;
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
			images.x = x;
			images.y = y;
			images.act = true;
			Sleep(50);
			b++;
		}
		GotoXY(x, y);
		Sleep(50);
		
	}
	system("pause");
	return 0;
}
