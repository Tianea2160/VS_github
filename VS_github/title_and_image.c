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

//image ��� ����
void print_line1(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("(*n'��'n*)");
}

void print_line2(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("(*�򢥢�`)��");
}

void print_line3(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("(*������)��");
}

void print_line4(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("===== *.*.* =====");
}

void print_line5(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("��.��.:*���ơ�.��.:*���ơ�");
}

void print_line6(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("��l||l��l||l��l||l��l||l");
}

void print_line7(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("�Ȧ��� ��ޡ䦡����");
}

void print_line8(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("�Ʀ��� ��ޡ⦡����");
}

void print_line9(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("��ۨ�");
}

void print_line10(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("�� ��,,��");
    GotoXY((*images).x, (*images).y + 1);
    printf("  (,,*��*)");
    GotoXY((*images).x, (*images).y + 2);
    printf("��(_��,��)");
}

void print_line11(ST_ImagePrint* images) {

    GotoXY((*images).x, (*images).y);
    printf(" / ) / )");

    GotoXY((*images).x, (*images).y + 1);
    printf("(.*�� *.)��");

    GotoXY((*images).x, (*images).y + 2);
    printf("��������������������");

    GotoXY((*images).x, (*images).y + 3);
    printf("�� *     ..��");

    GotoXY((*images).x, (*images).y + 4);
    printf("������������������������");
}

void print_line12(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("�٨ئ� �بۨ�Ѧ�");
    GotoXY((*images).x, (*images).y + 1);
    printf("����������  �� ��");
    GotoXY((*images).x, (*images).y + 2);
    printf("�� �٦� �ڨ�ۨᦰ");
}
void print_line13(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("|��������������|");
    GotoXY((*images).x, (*images).y + 1);
    printf("|              |");
    GotoXY((*images).x, (*images).y + 2);
    printf("|�ߣߣߣߣߣߣ�|");
    GotoXY((*images).x, (*images).y + 3);
    printf("/)__/) ||");
    GotoXY((*images).x, (*images).y + 4);
    printf("(*��*) ||");
    GotoXY((*images).x, (*images).y + 5);
    printf("/ . . .��");
}
void print_line14(ST_ImagePrint* images) {
    GotoXY((*images).x, (*images).y);
    printf("/}___/}   /}___/}");
    GotoXY((*images).x, (*images).y + 1);
    printf("( o ��o) (>��<  )");
    GotoXY((*images).x, (*images).y + 2);
    printf("/  >��    �� < |");
}
/*
�٨ئ��بۨ�Ѧ�
����������  ����
���� ���ڨ�ۨᦰ

*/
void PreimagePrint(void) {
    //�̸����� �̹��� ��� ��ǥ 
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
    ST_ImagePrint line12 = { 54,40 };
    ST_ImagePrint line13 = { 77,39 };
    ST_ImagePrint line14 = { 101, 40 };


    //�̸����� �̹��� ���
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
    //���� �׵θ� ���
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

    //���� ��� ���
   
 
    GotoXY(122, 4);
    printf("�̵�:����Ű");
    GotoXY(122, 5);
    printf("�̹��� ����:����Ʈ");
    GotoXY(122, 6);
    printf("����:backspace");
    GotoXY(122, 7);
    printf("�̹��� ���:spacebar");
    GotoXY(122, 8);
    printf("�ؽ�Ʈ:����");

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
                //a_input �ʱ�ȭ
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

    printf(" �� ���� ��\n\n ");
    printf("���� ����Ű\n  �� Ŀ���� ���ϴ� ��ġ�� �̵���ŵ�ϴ�.\n\n ");
    printf("���� ����Ʈ \n  �� �̹����� �����մϴ�.\n  �� ������ �̹����� ���� ��ܿ��� Ȯ���Ͻ� �� �ֽ��ϴ�. \n\n ");
    printf("���� �齺���̽� \n  �� Ŀ�� ��ó�� �̹����� �����մϴ�.\n\n ");
    printf("���� �����̽��� \n  �� ������ �̹����� �μ��մϴ�. \n\n ");
    printf("���� ���� \n  �� �ؽ�Ʈ�� �ۼ��� �� �ֽ��ϴ�. \n  �� �ٽ� ���͸� ������ �ؽ�Ʈ ����� ����˴ϴ�. \n\n\n ");
    printf(" > ���͸� ������ ���α׷��� ���۵˴ϴ�.");

    while (1) {
        if (_kbhit()) {
            key = _getch();
            if (key == 13)
                break;
        }
    }
}