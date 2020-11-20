#include<stdio.h>
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
    printf("¦£");

    for (i = 35; i < 120; i++)
    {
        gotoxy(i, 1);
        printf("¦¡");
    }
    printf("¦¤");

    for (int a = 2; a < 36; a++) //¿ÞÂÊ
    {
        gotoxy(34, a);
        printf("¦¢");
    }

    for (int a = 2; a < 36; a++) //¿À¸¥ÂÊ
    {
        gotoxy(120, a);
        printf("¦¢");
    }

    gotoxy(34, 36);
    printf("¦¦");
    for (i = 35; i < 120; i++)
    {
        gotoxy(i, 36);
        printf("¦¡");
    }
    printf("¦¥");

}

void printline1() //Ä­1
{
    int i;
    gotoxy(1, 1);
    printf("¦£");
    for (i = 2; i < 32; i++) //À§
    {
        gotoxy(i, 1);
        printf("¦¡");
    }
    printf("¦¤");

    for (int a = 2; a < 4; a++) //¿ÞÂÊ
    {
        gotoxy(1, a);
        printf("¦¢");
    }

    for (int a = 2; a < 4; a++) //¿À¸¥ÂÊ
    {
        gotoxy(32, a);
        printf("¦¢");
    }
    gotoxy(1, 4);
    printf("¦¦");
    for (i = 2; i < 32; i++) //¾Æ·¡
    {
        gotoxy(i, 4);
        printf("¦¡");
    }
    printf("¦¥");

}

void printline2()//Ä­2
{
    int i;
    gotoxy(1, 5);
    printf("¦£");
    for (i = 2; i < 32; i++) //À§
    {
        gotoxy(i, 5);
        printf("¦¡");
    }
    printf("¦¤");

    for (int a = 6; a < 8; a++) //¿ÞÂÊ
    {
        gotoxy(1, a);
        printf("¦¢");
    }

    for (int a = 6; a < 8; a++) //¿À¸¥ÂÊ
    {
        gotoxy(32, a);
        printf("¦¢");
    }
    gotoxy(1, 8);
    printf("¦¦");
    for (i = 2; i < 32; i++) //¾Æ·¡
    {
        gotoxy(i, 8);
        printf("¦¡");
    }
    printf("¦¥");

}

void printline3()//Ä­3
{
    int i;
    gotoxy(1, 9);
    printf("¦£");
    for (i = 2; i < 32; i++) //À§
    {
        gotoxy(i, 9);
        printf("¦¡");
    }
    printf("¦¤");

    for (int a = 10; a < 12; a++) //¿ÞÂÊ
    {
        gotoxy(1, a);
        printf("¦¢");
    }

    for (int a = 10; a < 12; a++) //¿À¸¥ÂÊ
    {
        gotoxy(32, a);
        printf("¦¢");
    }
    gotoxy(1, 12);
    printf("¦¦");
    for (i = 2; i < 32; i++) //¾Æ·¡
    {
        gotoxy(i, 12);
        printf("¦¡");
    }
    printf("¦¥");

}

void printline4()//Ä­4
{
    int i;
    gotoxy(1, 13);
    printf("¦£");
    for (i = 2; i < 32; i++) //À§
    {
        gotoxy(i, 13);
        printf("¦¡");
    }
    printf("¦¤");

    for (int a = 14; a < 16; a++) //¿ÞÂÊ
    {
        gotoxy(1, a);
        printf("¦¢");
    }

    for (int a = 14; a < 16; a++) //¿À¸¥ÂÊ
    {
        gotoxy(32, a);
        printf("¦¢");
    }
    gotoxy(1, 16);
    printf("¦¦");
    for (i = 2; i < 32; i++) //¾Æ·¡
    {
        gotoxy(i, 16);
        printf("¦¡");
    }
    printf("¦¥");

}

void printline5()//Ä­5
{
    int i;
    gotoxy(1, 17);
    printf("¦£");
    for (i = 2; i < 32; i++) //À§
    {
        gotoxy(i, 17);
        printf("¦¡");
    }
    printf("¦¤");

    for (int a = 18; a < 20; a++) //¿ÞÂÊ
    {
        gotoxy(1, a);
        printf("¦¢");
    }

    for (int a = 18; a < 20; a++) //¿À¸¥ÂÊ
    {
        gotoxy(32, a);
        printf("¦¢");
    }
    gotoxy(1, 20);
    printf("¦¦");
    for (i = 2; i < 32; i++) //¾Æ·¡
    {
        gotoxy(i, 20);
        printf("¦¡");
    }
    printf("¦¥");

}

void printline6()//Ä­6
{
    int i;
    gotoxy(1, 21);
    printf("¦£");
    for (i = 2; i < 32; i++) //À§
    {
        gotoxy(i, 21);
        printf("¦¡");
    }
    printf("¦¤");

    for (int a = 22; a < 24; a++) //¿ÞÂÊ
    {
        gotoxy(1, a);
        printf("¦¢");
    }

    for (int a = 22; a < 24; a++) //¿À¸¥ÂÊ
    {
        gotoxy(32, a);
        printf("¦¢");
    }
    gotoxy(1, 24);
    printf("¦¦");
    for (i = 2; i < 32; i++) //¾Æ·¡
    {
        gotoxy(i, 24);
        printf("¦¡");
    }
    printf("¦¥");

}

void printline7()//Ä­7
{
    int i;
    gotoxy(1, 25);
    printf("¦£");
    for (i = 2; i < 32; i++) //À§
    {
        gotoxy(i, 25);
        printf("¦¡");
    }
    printf("¦¤");

    for (int a = 26; a < 28; a++) //¿ÞÂÊ
    {
        gotoxy(1, a);
        printf("¦¢");
    }

    for (int a = 26; a < 28; a++) //¿À¸¥ÂÊ
    {
        gotoxy(32, a);
        printf("¦¢");
    }
    gotoxy(1, 28);
    printf("¦¦");
    for (i = 2; i < 32; i++) //¾Æ·¡
    {
        gotoxy(i, 28);
        printf("¦¡");
    }
    printf("¦¥");

}

void printline8()//Ä­8
{
    int i;
    gotoxy(1, 29);
    printf("¦£");
    for (i = 2; i < 32; i++) //À§
    {
        gotoxy(i, 29);
        printf("¦¡");
    }
    printf("¦¤");

    for (int a = 30; a < 32; a++) //¿ÞÂÊ
    {
        gotoxy(1, a);
        printf("¦¢");
    }

    for (int a = 30; a < 32; a++) //¿À¸¥ÂÊ
    {
        gotoxy(32, a);
        printf("¦¢");
    }
    gotoxy(1, 32);
    printf("¦¦");
    for (i = 2; i < 32; i++) //¾Æ·¡
    {
        gotoxy(i, 32);
        printf("¦¡");
    }
    printf("¦¥");

}

void printline9()//Ä­9
{
    int i;
    gotoxy(1, 33);
    printf("¦£");
    for (i = 2; i < 32; i++) //À§
    {
        gotoxy(i, 33);
        printf("¦¡");
    }
    printf("¦¤");

    for (int a = 34; a < 36; a++) //¿ÞÂÊ
    {
        gotoxy(1, a);
        printf("¦¢");
    }

    for (int a = 34; a < 36; a++) //¿À¸¥ÂÊ
    {
        gotoxy(32, a);
        printf("¦¢");
    }
    gotoxy(1, 36);
    printf("¦¦");
    for (i = 2; i < 32; i++) //¾Æ·¡
    {
        gotoxy(i, 36);
        printf("¦¡");
    }
    printf("¦¥");

}

void printline10()//¹ØÄ­1
{
    int i;
    gotoxy(1, 37);
    printf("¦£");
    for (i = 2; i < 24; i++) //À§
    {
        gotoxy(i, 37);
        printf("¦¡");
    }
    printf("¦¤");

    for (int a = 38; a < 45; a++) //¿ÞÂÊ
    {
        gotoxy(1, a);
        printf("¦¢");
    }

    for (int a = 38; a < 45; a++) //¿À¸¥ÂÊ
    {
        gotoxy(24, a);
        printf("¦¢");
    }
    gotoxy(1, 45);
    printf("¦¦");
    for (i = 2; i < 24; i++) //¾Æ·¡
    {
        gotoxy(i, 45);
        printf("¦¡");
    }
    printf("¦¥");

}

void printline11()//¹ØÄ­2
{
    int i;
    gotoxy(25, 37);
    printf("¦£");
    for (i = 26; i < 48; i++) //À§
    {
        gotoxy(i, 37);
        printf("¦¡");
    }
    printf("¦¤");

    for (int a = 38; a < 45; a++) //¿ÞÂÊ
    {
        gotoxy(25, a);
        printf("¦¢");
    }

    for (int a = 38; a < 45; a++) //¿À¸¥ÂÊ
    {
        gotoxy(48, a);
        printf("¦¢");
    }
    gotoxy(25, 45);
    printf("¦¦");
    for (i = 26; i < 48; i++) //¾Æ·¡
    {
        gotoxy(i, 45);
        printf("¦¡");
    }
    printf("¦¥");

}

void printline12()//¹ØÄ­3
{
    int i;
    gotoxy(49, 37);
    printf("¦£");
    for (i = 50; i < 72; i++) //À§
    {
        gotoxy(i, 37);
        printf("¦¡");
    }
    printf("¦¤");

    for (int a = 38; a < 45; a++) //¿ÞÂÊ
    {
        gotoxy(49, a);
        printf("¦¢");
    }

    for (int a = 38; a < 45; a++) //¿À¸¥ÂÊ
    {
        gotoxy(72, a);
        printf("¦¢");
    }
    gotoxy(49, 45);
    printf("¦¦");
    for (i = 50; i < 72; i++) //¾Æ·¡
    {
        gotoxy(i, 45);
        printf("¦¡");
    }
    printf("¦¥");

}

void printline13()//¹ØÄ­4
{
    int i;
    gotoxy(73, 37);
    printf("¦£");
    for (i = 74; i < 96; i++) //À§
    {
        gotoxy(i, 37);
        printf("¦¡");
    }
    printf("¦¤");

    for (int a = 38; a < 45; a++) //¿ÞÂÊ
    {
        gotoxy(73, a);
        printf("¦¢");
    }

    for (int a = 38; a < 45; a++) //¿À¸¥ÂÊ
    {
        gotoxy(96, a);
        printf("¦¢");
    }
    gotoxy(73, 45);
    printf("¦¦");
    for (i = 74; i < 96; i++) //¾Æ·¡
    {
        gotoxy(i, 45);
        printf("¦¡");
    }
    printf("¦¥");

}

void printline14()//¹ØÄ­5
{
    int i;
    gotoxy(97, 37);
    printf("¦£");
    for (i = 98; i < 120; i++) //À§
    {
        gotoxy(i, 37);
        printf("¦¡");
    }
    printf("¦¤");

    for (int a = 38; a < 45; a++) //¿ÞÂÊ
    {
        gotoxy(97, a);
        printf("¦¢");
    }

    for (int a = 38; a < 45; a++) //¿À¸¥ÂÊ
    {
        gotoxy(120, a);
        printf("¦¢");
    }
    gotoxy(97, 45);
    printf("¦¦");
    for (i = 98; i < 120; i++) //¾Æ·¡
    {
        gotoxy(i, 45);
        printf("¦¡");
    }
    printf("¦¥");

}

//image Ãâ·Â Á¤ÀÇ
void print_line1(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("(*n'¢¨'n*)");
}

void print_line2(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("(*¥ò¢¥¢£`)¥ò");
}

void print_line3(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("(*¢«¢¨¢«)¢½");
}

void print_line4(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("===== *.*.* =====");
}

void print_line5(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("¡Ù.¡£.:*¡¤¡Æ¡Ù.¡£.:*¡¤¡Æ¡Ù");
}

void print_line6(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("¡Æl||l¡Æl||l¡Æl||l¡Æl||l");
}

void print_line7(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("¦È¦¡¦¡ ¡ä¡Þ¡ä¦¡¦¡¦Â");
}

void print_line8(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("¦Æ¦¡¦¡ ¡â¡Þ¡â¦¡¦¡¦Ä");
}

void print_line9(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("¨ã¨Û¨ã");
}

void print_line10(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("¡¡ ¡ü,,¡ü");
    GotoXY((*images).x, (*images).y + 1);
    printf("  (,,*¢£*)");
    GotoXY((*images).x, (*images).y + 2);
    printf("¢¦(_£õ,£õ)");
}

void print_line11(ST_ImagePrint* images) {

    GotoXY((*images).x, (*images).y);
    printf(" / ) / )");

    GotoXY((*images).x, (*images).y + 1);
    printf("(.*¤µ *.)¢½");

    GotoXY((*images).x, (*images).y + 2);
    printf("¦®¦¬¡ú¦¬¡ú¦¬¦¬¦¬¦¬¦¯");

    GotoXY((*images).x, (*images).y + 3);
    printf("¢½ *     ..¢½");

    GotoXY((*images).x, (*images).y + 4);
    printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°");
}

void print_line12(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("¡Ù¨Ø¦¬ ¨Ø¨Û¨â¨Ñ¦¯");
    GotoXY((*images).x, (*images).y + 1);
    printf("¦­¡¡¡¡¡¡¡¡  ¡¡ ¦­");
    GotoXY((*images).x, (*images).y + 2);
    printf("¦± ¡Ù¦¬ ¡Ú¨å¨Û¨á¦°");
}
void print_line13(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("|£þ£þ£þ£þ£þ£þ£þ|");
    GotoXY((*images).x, (*images).y + 1);
    printf("|              |");
    GotoXY((*images).x, (*images).y + 2);
    printf("|£ß£ß£ß£ß£ß£ß£ß|");
    GotoXY((*images).x, (*images).y + 3);
    printf("/)__/) ||");
    GotoXY((*images).x, (*images).y + 4);
    printf("(*¤µ*) ||");
    GotoXY((*images).x, (*images).y + 5);
    printf("/ . . .ªÅ");
}
void print_line14(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("/}___/}   /}___/}");
    GotoXY((*images).x, (*images).y + 1);
    printf("( o ¤±o) (>¤±<  )");
    GotoXY((*images).x, (*images).y + 2);
    printf("/  >¢¾    ¡Ú < |");
}
/*
¡Ù¨Ø¦¬¨Ø¨Û¨â¨Ñ¦¯
¦­¡¡¡¡¡¡¡¡  ¡¡¦­
¦±¡Ù ¦¬¡Ú¨å¨Û¨á¦°

*/
void PreimagePrint(void) {
    //¹Ì¸®º¸±â ÀÌ¹ÌÁö Ãâ·Â ÁÂÇ¥ 
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


    //¹Ì¸®º¸±â ÀÌ¹ÌÁö Ãâ·Â
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
    //¹ØÀº Å×µÎ¸® Ãâ·Â
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
                //a_input ÃÊ±âÈ­
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

    // ÇÑ±Û·Î ¹Ù²Ù¸é ¿À·ù³²
    printf("Å×½ºÆ®");

    while (1) {
        if (_kbhit()) {
            key = _getch();
            if (key == 13)
                break;
        }
    }
}