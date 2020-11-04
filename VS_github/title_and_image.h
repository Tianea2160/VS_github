#include<stdio.h>
typedef struct ST_imageprint {
	int x, y;
	bool act;
}ST_ImagePrint;

void printallline(void);
void printrabbit(ST_ImagePrint images);
void printbaby(ST_ImagePrint images);