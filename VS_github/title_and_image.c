#include<stdio.h>
#include<stdbool.h>
#include<Windows.h>
#include"Console.h"

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
    printf("��");

    for (i = 35; i < 120; i++)
    {
        gotoxy(i, 1);
        printf("��");
    }
    printf("��");

    for (int a = 2; a < 36; a++) //����
    {
        gotoxy(34, a);
        printf("��");
    }

    for (int a = 2; a < 36; a++) //������
    {
        gotoxy(120, a);
        printf("��");
    }

    gotoxy(34, 36);
    printf("��");
    for (i = 35; i < 120; i++)
    {
        gotoxy(i, 36);
        printf("��");
    }
    printf("��");

}

void printline1() //ĭ1
{
    int i;
    gotoxy(1, 1);
    printf("��");
    for (i = 2; i < 32; i++) //��
    {
        gotoxy(i, 1);
        printf("��");
    }
    printf("��");

    for (int a = 2; a < 4; a++) //����
    {
        gotoxy(1, a);
        printf("��");
    }

    for (int a = 2; a < 4; a++) //������
    {
        gotoxy(32, a);
        printf("��");
    }
    gotoxy(1, 4);
    printf("��");
    for (i = 2; i < 32; i++) //�Ʒ�
    {
        gotoxy(i, 4);
        printf("��");
    }
    printf("��");

}

void printline2()//ĭ2
{
    int i;
    gotoxy(1, 5);
    printf("��");
    for (i = 2; i < 32; i++) //��
    {
        gotoxy(i, 5);
        printf("��");
    }
    printf("��");

    for (int a = 6; a < 8; a++) //����
    {
        gotoxy(1, a);
        printf("��");
    }

    for (int a = 6; a < 8; a++) //������
    {
        gotoxy(32, a);
        printf("��");
    }
    gotoxy(1, 8);
    printf("��");
    for (i = 2; i < 32; i++) //�Ʒ�
    {
        gotoxy(i, 8);
        printf("��");
    }
    printf("��");

}

void printline3()//ĭ3
{
    int i;
    gotoxy(1, 9);
    printf("��");
    for (i = 2; i < 32; i++) //��
    {
        gotoxy(i, 9);
        printf("��");
    }
    printf("��");

    for (int a = 10; a < 12; a++) //����
    {
        gotoxy(1, a);
        printf("��");
    }

    for (int a = 10; a < 12; a++) //������
    {
        gotoxy(32, a);
        printf("��");
    }
    gotoxy(1, 12);
    printf("��");
    for (i = 2; i < 32; i++) //�Ʒ�
    {
        gotoxy(i, 12);
        printf("��");
    }
    printf("��");

}

void printline4()//ĭ4
{
    int i;
    gotoxy(1, 13);
    printf("��");
    for (i = 2; i < 32; i++) //��
    {
        gotoxy(i, 13);
        printf("��");
    }
    printf("��");

    for (int a = 14; a < 16; a++) //����
    {
        gotoxy(1, a);
        printf("��");
    }

    for (int a = 14; a < 16; a++) //������
    {
        gotoxy(32, a);
        printf("��");
    }
    gotoxy(1, 16);
    printf("��");
    for (i = 2; i < 32; i++) //�Ʒ�
    {
        gotoxy(i, 16);
        printf("��");
    }
    printf("��");

}

void printline5()//ĭ5
{
    int i;
    gotoxy(1, 17);
    printf("��");
    for (i = 2; i < 32; i++) //��
    {
        gotoxy(i, 17);
        printf("��");
    }
    printf("��");

    for (int a = 18; a < 20; a++) //����
    {
        gotoxy(1, a);
        printf("��");
    }

    for (int a = 18; a < 20; a++) //������
    {
        gotoxy(32, a);
        printf("��");
    }
    gotoxy(1, 20);
    printf("��");
    for (i = 2; i < 32; i++) //�Ʒ�
    {
        gotoxy(i, 20);
        printf("��");
    }
    printf("��");

}

void printline6()//ĭ6
{
    int i;
    gotoxy(1, 21);
    printf("��");
    for (i = 2; i < 32; i++) //��
    {
        gotoxy(i, 21);
        printf("��");
    }
    printf("��");

    for (int a = 22; a < 24; a++) //����
    {
        gotoxy(1, a);
        printf("��");
    }

    for (int a = 22; a < 24; a++) //������
    {
        gotoxy(32, a);
        printf("��");
    }
    gotoxy(1, 24);
    printf("��");
    for (i = 2; i < 32; i++) //�Ʒ�
    {
        gotoxy(i, 24);
        printf("��");
    }
    printf("��");

}

void printline7()//ĭ7
{
    int i;
    gotoxy(1, 25);
    printf("��");
    for (i = 2; i < 32; i++) //��
    {
        gotoxy(i, 25);
        printf("��");
    }
    printf("��");

    for (int a = 26; a < 28; a++) //����
    {
        gotoxy(1, a);
        printf("��");
    }

    for (int a = 26; a < 28; a++) //������
    {
        gotoxy(32, a);
        printf("��");
    }
    gotoxy(1, 28);
    printf("��");
    for (i = 2; i < 32; i++) //�Ʒ�
    {
        gotoxy(i, 28);
        printf("��");
    }
    printf("��");

}

void printline8()//ĭ8
{
    int i;
    gotoxy(1, 29);
    printf("��");
    for (i = 2; i < 32; i++) //��
    {
        gotoxy(i, 29);
        printf("��");
    }
    printf("��");

    for (int a = 30; a < 32; a++) //����
    {
        gotoxy(1, a);
        printf("��");
    }

    for (int a = 30; a < 32; a++) //������
    {
        gotoxy(32, a);
        printf("��");
    }
    gotoxy(1, 32);
    printf("��");
    for (i = 2; i < 32; i++) //�Ʒ�
    {
        gotoxy(i, 32);
        printf("��");
    }
    printf("��");

}

void printline9()//ĭ9
{
    int i;
    gotoxy(1, 33);
    printf("��");
    for (i = 2; i < 32; i++) //��
    {
        gotoxy(i, 33);
        printf("��");
    }
    printf("��");

    for (int a = 34; a < 36; a++) //����
    {
        gotoxy(1, a);
        printf("��");
    }

    for (int a = 34; a < 36; a++) //������
    {
        gotoxy(32, a);
        printf("��");
    }
    gotoxy(1, 36);
    printf("��");
    for (i = 2; i < 32; i++) //�Ʒ�
    {
        gotoxy(i, 36);
        printf("��");
    }
    printf("��");

}

void printline10()//��ĭ1
{
    int i;
    gotoxy(1, 37);
    printf("��");
    for (i = 2; i < 24; i++) //��
    {
        gotoxy(i, 37);
        printf("��");
    }
    printf("��");

    for (int a = 38; a < 45; a++) //����
    {
        gotoxy(1, a);
        printf("��");
    }

    for (int a = 38; a < 45; a++) //������
    {
        gotoxy(24, a);
        printf("��");
    }
    gotoxy(1, 45);
    printf("��");
    for (i = 2; i < 24; i++) //�Ʒ�
    {
        gotoxy(i, 45);
        printf("��");
    }
    printf("��");

}

void printline11()//��ĭ2
{
    int i;
    gotoxy(25, 37);
    printf("��");
    for (i = 26; i < 48; i++) //��
    {
        gotoxy(i, 37);
        printf("��");
    }
    printf("��");

    for (int a = 38; a < 45; a++) //����
    {
        gotoxy(25, a);
        printf("��");
    }

    for (int a = 38; a < 45; a++) //������
    {
        gotoxy(48, a);
        printf("��");
    }
    gotoxy(25, 45);
    printf("��");
    for (i = 26; i < 48; i++) //�Ʒ�
    {
        gotoxy(i, 45);
        printf("��");
    }
    printf("��");

}

void printline12()//��ĭ3
{
    int i;
    gotoxy(49, 37);
    printf("��");
    for (i = 50; i < 72; i++) //��
    {
        gotoxy(i, 37);
        printf("��");
    }
    printf("��");

    for (int a = 38; a < 45; a++) //����
    {
        gotoxy(49, a);
        printf("��");
    }

    for (int a = 38; a < 45; a++) //������
    {
        gotoxy(72, a);
        printf("��");
    }
    gotoxy(49, 45);
    printf("��");
    for (i = 50; i < 72; i++) //�Ʒ�
    {
        gotoxy(i, 45);
        printf("��");
    }
    printf("��");

}

void printline13()//��ĭ4
{
    int i;
    gotoxy(73, 37);
    printf("��");
    for (i = 74; i < 96; i++) //��
    {
        gotoxy(i, 37);
        printf("��");
    }
    printf("��");

    for (int a = 38; a < 45; a++) //����
    {
        gotoxy(73, a);
        printf("��");
    }

    for (int a = 38; a < 45; a++) //������
    {
        gotoxy(96, a);
        printf("��");
    }
    gotoxy(73, 45);
    printf("��");
    for (i = 74; i < 96; i++) //�Ʒ�
    {
        gotoxy(i, 45);
        printf("��");
    }
    printf("��");

}

void printline14()//��ĭ5
{
    int i;
    gotoxy(97, 37);
    printf("��");
    for (i = 98; i < 120; i++) //��
    {
        gotoxy(i, 37);
        printf("��");
    }
    printf("��");

    for (int a = 38; a < 45; a++) //����
    {
        gotoxy(97, a);
        printf("��");
    }

    for (int a = 38; a < 45; a++) //������
    {
        gotoxy(120, a);
        printf("��");
    }
    gotoxy(97, 45);
    printf("��");
    for (i = 98; i < 120; i++) //�Ʒ�
    {
        gotoxy(i, 45);
        printf("��");
    }
    printf("��");

}

void printrabbit(ST_ImagePrint* images) {

	GotoXY((*images).x, (*images).y);
	printf(" / ) / )");

	GotoXY((*images).x, (*images).y+1);
	printf("(.*�� *.)��");

	GotoXY((*images).x, (*images).y+2);
	printf("��������������������");

	GotoXY((*images).x, (*images).y+3);
	printf("�� *     ..��");

	GotoXY((*images).x, (*images).y+4);
	printf("������������������������");
}
void printbaby(ST_ImagePrint* images) {
	GotoXY((*images).x, (*images).y);
	printf("�� ��,,��");
	GotoXY((*images).x, (*images).y+1);
	printf("  (,,*��*)");
	GotoXY((*images).x, (*images).y+2);
	printf("��(_��,��)");
}
void printallline()
{
    ST_ImagePrint rabbit = { 31,39 };
    ST_ImagePrint baby = { 8,40 };
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

    printrabbit(&rabbit);
    printbaby(&baby);
}