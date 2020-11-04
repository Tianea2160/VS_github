#ifndef __CONSOLE_H__
#define __CONSOLE_H__

#include <windows.h>
#include <stdbool.h>


void Clear(void);

void GotoXY(int _x, int _y);

void SetTitle(char* _szConsoleName);

void SetColor(unsigned char _BgColor, unsigned char _TextColor);

void SetCursorVisible(bool _bShow);

void SetConsoleSize(int _col, int _lines);

void printallline(void);
#endif