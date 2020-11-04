#include<stdio.h>
#include<stdbool.h>
#include<Windows.h>

void printline1()
{
	int i;
	printf("┌");
	for (i = 0; i < 30; i++) printf("─");
	printf("┐\t");

	printf("┌");
	for (i = 0; i < 90; i++) printf("─");
	printf("┐\n");
}

void printline2(const char* ap_string, int a_space_count)
{
	printf("│%-*s│\t", a_space_count, ap_string);
	printf("│%-90s│\n", "");
}

void printline3()
{
	int i;
	printf("└");
	for (i = 0; i < 30; i++) printf("─");
	printf("┘\t");

	printf("│%-90s│\n", "");
}

void printline4()
{
	int i;
	printf("┌");
	for (i = 0; i < 30; i++) printf("─");
	printf("┐\t");

	printf("│%-90s│\n", "");
}

void printline5()
{
	int i;
	printf("└");
	for (i = 0; i < 30; i++) printf("─");
	printf("┘\t");

	printf("└");
	for (i = 0; i < 90; i++) printf("─");
	printf("┘\t");
}

void printallline() {
	printline1("");
	printline2("", 30);//printline2 "" 공간에 이모티콘을 넣어 미리보기를 표시
	printline2("", 30);
	printline3("");
	printline4("");
	printline2("", 30);
	printline2("", 30);
	printline3("");
	printline4("");
	printline2("", 30);
	printline2("", 30);
	printline3("");
	printline4("");
	printline2("", 30);
	printline2("", 30);
	printline3("");
	printline4("");
	printline2("", 30);
	printline2("", 30);
	printline3("");
	printline4("");
	printline2("", 30);
	printline2("", 30);
	printline3("");
	printline4("");
	printline2("", 30);
	printline2("", 30);
	printline3("");
	printline4("");
	printline2("", 30);
	printline2("", 30);
	printline3("");
	printline4("");
	printline2("", 30);
	printline2("", 30);
	printline5("");
}
typedef struct ST_imageprint {
	int x, y;
	bool act;
}ST_ImagePrint;

void printrabbit(ST_ImagePrint images) {

	GotoXY((images.x), (images.y));
	printf(" / ) / )");

	GotoXY((images.x), (images.y) + 1);
	printf("(.*ㅅ *.)♡");

	GotoXY((images.x), (images.y) + 2);
	printf("┏━∪━∪━━━━┓");

	GotoXY((images.x), (images.y) + 3);
	printf("♡ * ..♡");

	GotoXY((images.x), (images.y) + 4);
	printf("┗━━━━━━━━━━┛");
}
void printbaby(ST_ImagePrint images) {
	GotoXY((images.x), (images.y));
	printf("　 ∧,,∧");
	GotoXY((images.x), (images.y) + 1);
	printf("  (,,*∀*)");
	GotoXY((images.x), (images.y) + 2);
	printf("～(_ｕ,ｕ)");
}