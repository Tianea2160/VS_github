﻿#include<stdio.h>
#include<stdbool.h>
#include<Windows.h>
#include"Console.h"
#include <conio.h>

typedef struct ST_imageprint {
	int x, y;
	bool act;
}ST_ImagePrint;

void gotoxy(int x, int y)

{

    COORD pos = { x,y };

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

void printmain()
{
    int i;
    gotoxy(34, 1);
    printf("┌");

    for (i = 35; i < 120; i++)
    {
        gotoxy(i, 1);
        printf("─");
    }
    printf("┐");

    for (int a = 2; a < 36; a++) //왼쪽
    {
        gotoxy(34, a);
        printf("│");
    }

    for (int a = 2; a < 36; a++) //오른쪽
    {
        gotoxy(120, a);
        printf("│");
    }

    gotoxy(34, 36);
    printf("└");
    for (i = 35; i < 120; i++)
    {
        gotoxy(i, 36);
        printf("─");
    }
    printf("┘");

}

void printline1() //칸1
{
    int i;
    gotoxy(1, 1);
    printf("┌");
    for (i = 2; i < 32; i++) //위
    {
        gotoxy(i, 1);
        printf("─");
    }
    printf("┐");

    for (int a = 2; a < 4; a++) //왼쪽
    {
        gotoxy(1, a);
        printf("│");
    }

    for (int a = 2; a < 4; a++) //오른쪽
    {
        gotoxy(32, a);
        printf("│");
    }
    gotoxy(1, 4);
    printf("└");
    for (i = 2; i < 32; i++) //아래
    {
        gotoxy(i, 4);
        printf("─");
    }
    printf("┘");

}

void printline2()//칸2
{
    int i;
    gotoxy(1, 5);
    printf("┌");
    for (i = 2; i < 32; i++) //위
    {
        gotoxy(i, 5);
        printf("─");
    }
    printf("┐");

    for (int a = 6; a < 8; a++) //왼쪽
    {
        gotoxy(1, a);
        printf("│");
    }

    for (int a = 6; a < 8; a++) //오른쪽
    {
        gotoxy(32, a);
        printf("│");
    }
    gotoxy(1, 8);
    printf("└");
    for (i = 2; i < 32; i++) //아래
    {
        gotoxy(i, 8);
        printf("─");
    }
    printf("┘");

}

void printline3()//칸3
{
    int i;
    gotoxy(1, 9);
    printf("┌");
    for (i = 2; i < 32; i++) //위
    {
        gotoxy(i, 9);
        printf("─");
    }
    printf("┐");

    for (int a = 10; a < 12; a++) //왼쪽
    {
        gotoxy(1, a);
        printf("│");
    }

    for (int a = 10; a < 12; a++) //오른쪽
    {
        gotoxy(32, a);
        printf("│");
    }
    gotoxy(1, 12);
    printf("└");
    for (i = 2; i < 32; i++) //아래
    {
        gotoxy(i, 12);
        printf("─");
    }
    printf("┘");

}

void printline4()//칸4
{
    int i;
    gotoxy(1, 13);
    printf("┌");
    for (i = 2; i < 32; i++) //위
    {
        gotoxy(i, 13);
        printf("─");
    }
    printf("┐");

    for (int a = 14; a < 16; a++) //왼쪽
    {
        gotoxy(1, a);
        printf("│");
    }

    for (int a = 14; a < 16; a++) //오른쪽
    {
        gotoxy(32, a);
        printf("│");
    }
    gotoxy(1, 16);
    printf("└");
    for (i = 2; i < 32; i++) //아래
    {
        gotoxy(i, 16);
        printf("─");
    }
    printf("┘");

}

void printline5()//칸5
{
    int i;
    gotoxy(1, 17);
    printf("┌");
    for (i = 2; i < 32; i++) //위
    {
        gotoxy(i, 17);
        printf("─");
    }
    printf("┐");

    for (int a = 18; a < 20; a++) //왼쪽
    {
        gotoxy(1, a);
        printf("│");
    }

    for (int a = 18; a < 20; a++) //오른쪽
    {
        gotoxy(32, a);
        printf("│");
    }
    gotoxy(1, 20);
    printf("└");
    for (i = 2; i < 32; i++) //아래
    {
        gotoxy(i, 20);
        printf("─");
    }
    printf("┘");

}

void printline6()//칸6
{
    int i;
    gotoxy(1, 21);
    printf("┌");
    for (i = 2; i < 32; i++) //위
    {
        gotoxy(i, 21);
        printf("─");
    }
    printf("┐");

    for (int a = 22; a < 24; a++) //왼쪽
    {
        gotoxy(1, a);
        printf("│");
    }

    for (int a = 22; a < 24; a++) //오른쪽
    {
        gotoxy(32, a);
        printf("│");
    }
    gotoxy(1, 24);
    printf("└");
    for (i = 2; i < 32; i++) //아래
    {
        gotoxy(i, 24);
        printf("─");
    }
    printf("┘");

}

void printline7()//칸7
{
    int i;
    gotoxy(1, 25);
    printf("┌");
    for (i = 2; i < 32; i++) //위
    {
        gotoxy(i, 25);
        printf("─");
    }
    printf("┐");

    for (int a = 26; a < 28; a++) //왼쪽
    {
        gotoxy(1, a);
        printf("│");
    }

    for (int a = 26; a < 28; a++) //오른쪽
    {
        gotoxy(32, a);
        printf("│");
    }
    gotoxy(1, 28);
    printf("└");
    for (i = 2; i < 32; i++) //아래
    {
        gotoxy(i, 28);
        printf("─");
    }
    printf("┘");

}

void printline8()//칸8
{
    int i;
    gotoxy(1, 29);
    printf("┌");
    for (i = 2; i < 32; i++) //위
    {
        gotoxy(i, 29);
        printf("─");
    }
    printf("┐");

    for (int a = 30; a < 32; a++) //왼쪽
    {
        gotoxy(1, a);
        printf("│");
    }

    for (int a = 30; a < 32; a++) //오른쪽
    {
        gotoxy(32, a);
        printf("│");
    }
    gotoxy(1, 32);
    printf("└");
    for (i = 2; i < 32; i++) //아래
    {
        gotoxy(i, 32);
        printf("─");
    }
    printf("┘");

}

void printline9()//칸9
{
    int i;
    gotoxy(1, 33);
    printf("┌");
    for (i = 2; i < 32; i++) //위
    {
        gotoxy(i, 33);
        printf("─");
    }
    printf("┐");

    for (int a = 34; a < 36; a++) //왼쪽
    {
        gotoxy(1, a);
        printf("│");
    }

    for (int a = 34; a < 36; a++) //오른쪽
    {
        gotoxy(32, a);
        printf("│");
    }
    gotoxy(1, 36);
    printf("└");
    for (i = 2; i < 32; i++) //아래
    {
        gotoxy(i, 36);
        printf("─");
    }
    printf("┘");

}

void printline10()//밑칸1
{
    int i;
    gotoxy(1, 37);
    printf("┌");
    for (i = 2; i < 24; i++) //위
    {
        gotoxy(i, 37);
        printf("─");
    }
    printf("┐");

    for (int a = 38; a < 45; a++) //왼쪽
    {
        gotoxy(1, a);
        printf("│");
    }

    for (int a = 38; a < 45; a++) //오른쪽
    {
        gotoxy(24, a);
        printf("│");
    }
    gotoxy(1, 45);
    printf("└");
    for (i = 2; i < 24; i++) //아래
    {
        gotoxy(i, 45);
        printf("─");
    }
    printf("┘");

}

void printline11()//밑칸2
{
    int i;
    gotoxy(25, 37);
    printf("┌");
    for (i = 26; i < 48; i++) //위
    {
        gotoxy(i, 37);
        printf("─");
    }
    printf("┐");

    for (int a = 38; a < 45; a++) //왼쪽
    {
        gotoxy(25, a);
        printf("│");
    }

    for (int a = 38; a < 45; a++) //오른쪽
    {
        gotoxy(48, a);
        printf("│");
    }
    gotoxy(25, 45);
    printf("└");
    for (i = 26; i < 48; i++) //아래
    {
        gotoxy(i, 45);
        printf("─");
    }
    printf("┘");

}

void printline12()//밑칸3
{
    int i;
    gotoxy(49, 37);
    printf("┌");
    for (i = 50; i < 72; i++) //위
    {
        gotoxy(i, 37);
        printf("─");
    }
    printf("┐");

    for (int a = 38; a < 45; a++) //왼쪽
    {
        gotoxy(49, a);
        printf("│");
    }

    for (int a = 38; a < 45; a++) //오른쪽
    {
        gotoxy(72, a);
        printf("│");
    }
    gotoxy(49, 45);
    printf("└");
    for (i = 50; i < 72; i++) //아래
    {
        gotoxy(i, 45);
        printf("─");
    }
    printf("┘");

}

void printline13()//밑칸4
{
    int i;
    gotoxy(73, 37);
    printf("┌");
    for (i = 74; i < 96; i++) //위
    {
        gotoxy(i, 37);
        printf("─");
    }
    printf("┐");

    for (int a = 38; a < 45; a++) //왼쪽
    {
        gotoxy(73, a);
        printf("│");
    }

    for (int a = 38; a < 45; a++) //오른쪽
    {
        gotoxy(96, a);
        printf("│");
    }
    gotoxy(73, 45);
    printf("└");
    for (i = 74; i < 96; i++) //아래
    {
        gotoxy(i, 45);
        printf("─");
    }
    printf("┘");

}

void printline14()//밑칸5
{
    int i;
    gotoxy(97, 37);
    printf("┌");
    for (i = 98; i < 120; i++) //위
    {
        gotoxy(i, 37);
        printf("─");
    }
    printf("┐");

    for (int a = 38; a < 45; a++) //왼쪽
    {
        gotoxy(97, a);
        printf("│");
    }

    for (int a = 38; a < 45; a++) //오른쪽
    {
        gotoxy(120, a);
        printf("│");
    }
    gotoxy(97, 45);
    printf("└");
    for (i = 98; i < 120; i++) //아래
    {
        gotoxy(i, 45);
        printf("─");
    }
    printf("┘");

}

//image 출력 정의
void print_line1(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("(*n'˘'n*)");
}

void print_line2(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("(*σ´∀`)σ");
}

void print_line3(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("(*˙˘˙)♡");
}

void print_line4(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("===== *.*.* =====");
}

void print_line5(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("☆.。.:*·°☆.。.:*·°☆");
}

void print_line6(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("°l||l°l||l°l||l°l||l");
}

void print_line7(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("┍── ▽◇▽──┑");
}

void print_line8(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("┕── △◇△──┙");
}

void print_line9(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("ⓦⓞⓦ");
}

void print_line10(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("　 ∧,,∧");
    GotoXY((*images).x, (*images).y + 1);
    printf("  (,,*∀*)");
    GotoXY((*images).x, (*images).y + 2);
    printf("～(_ｕ,ｕ)");
}

void print_line11(ST_ImagePrint* images) {

    GotoXY((*images).x, (*images).y);
    printf(" / ) / )");

    GotoXY((*images).x, (*images).y + 1);
    printf("(.*ㅅ *.)♡");

    GotoXY((*images).x, (*images).y + 2);
    printf("┏━∪━∪━━━━┓");

    GotoXY((*images).x, (*images).y + 3);
    printf("♡ *     ..♡");

    GotoXY((*images).x, (*images).y + 4);
    printf("┗━━━━━━━━━━┛");
}

void print_line12(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("☆ⓛ━ ⓛⓞⓥⓔ┓");
    GotoXY((*images).x, (*images).y + 1);
    printf("┃　　　　  　 ┃");
    GotoXY((*images).x, (*images).y + 2);
    printf("┗ ☆━ ★ⓨⓞⓤ┛");
}
void print_line13(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("|￣￣￣￣￣￣￣|");
    GotoXY((*images).x, (*images).y + 1);
    printf("|              |");
    GotoXY((*images).x, (*images).y + 2);
    printf("|＿＿＿＿＿＿＿|");
    GotoXY((*images).x, (*images).y + 3);
    printf("/)__/) ||");
    GotoXY((*images).x, (*images).y + 4);
    printf("(*ㅅ*) ||");
    GotoXY((*images).x, (*images).y + 5);
    printf("/ . . .づ");
}
void print_line14(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("/}___/}   /}___/}");
    GotoXY((*images).x, (*images).y + 1);
    printf("( o ㅁo) (>ㅁ<  )");
    GotoXY((*images).x, (*images).y + 2);
    printf("/  >♥    ★ < |");
}

/*
{\___/}
( • ㅁ•)
/  >🐰

{\___/}
(  • ㅁ•)
  🐰< \

 {\___/}
 (  •'ㅡ•)
  🐰< \

{\___/}
(   •̀Δ• ́)
/  >🐰

 /}___/}
(>ㅁ<  )
  🐰< |
*/
/*
printf("(*n'˘'n*)");
   printf("(*σ´∀`)σ");
   printf("(*˙˘˙)♡");
   printf("_(ツ)_/");
   printf("===== *.*.* =====");
   printf("☆.。.:*·°☆.。.:*·°☆");
   printf("°l||l°l||l°l||l°l||l°l||l°");

   printf("┍── ▽◇▽──┑\n");
   printf("%7s\n", " ");
   printf("┕── △◇△──┙\n");
   printf("ⓦⓞⓦ");

   printf("    │  │  │\n");
   printf(" ┍  │  ┕  │\n");
   printf(" │  │  ┍  │\n");
   printf("    │  │  │\n");
   printf(" ━━━┙  ┙ ━┙\n");


*/
void PreimagePrint(void) {
    //미리보기 이미지 출력 좌표 
    ST_ImagePrint line1 = { 3,2 };
    ST_ImagePrint line2 = { 3,6 };
    ST_ImagePrint line3 = { 3,10 };
    ST_ImagePrint line4 = { 3,14 };
    ST_ImagePrint line5 = { 3,18 };
    ST_ImagePrint line6 = { 3,22 };
    ST_ImagePrint line7 = { 3,26 };
    ST_ImagePrint line8 = { 3,30 };
    ST_ImagePrint line9 = { 3,34 };
    ST_ImagePrint line10 = { 8,40 };
    ST_ImagePrint line11 = { 31,39 };
    ST_ImagePrint line12 = { 54,39 };
    ST_ImagePrint line13 = { 77,39 };
    ST_ImagePrint line14 = { 100, 39 };


    //미리보기 이미지 출력
    print_line1(&line1);
    print_line2(&line2);
    print_line3(&line3);
    print_line4(&line4);
    print_line5(&line5);
    print_line6(&line6);
    print_line7(&line7);
    print_line8(&line8);
    print_line9(&line9);
    print_line10(&line10);
    print_line11(&line11);
    print_line12(&line12);
    print_line13(&line13);
    print_line14(&line14);
}
void PrintAllLine()
{
    //밑은 테두리 출력
    printmain("");
    printline1("");
    printline2("");
    printline3("");
    printline4("");
    printline5("");
    printline6("");
    printline7("");
    printline8("");
    printline9("");
    printline10("");
    printline11("");
    printline12("");
    printline13("");
    printline14("");
}

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
    printf("*Guide*\n");
    printf("shift\n : you can choose one of the image numbers\n\n");
    printf("backspace\n : you can delete the image near the cusor\n\n");
    printf("spacebar\n : print images that you choose\n\n");
    printf("enter \n: you can write some text. \nif you press enter again, \nyou can return the original state that you can print a few images and shift the image numbers.\n\n");


    printf("If you understand it.\nPress the enter!");

    while (1) {
        if (_kbhit()) {
            key = _getch();
            if (key == 13)
                break;
        }
    }
}