#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


int main(void) {
	int x = 5; //Ÿ��Ʋȭ���� ǥ�õǴ� x��ǥ 
	int y = 4; //Ÿ��Ʋȭ���� ǥ�õǴ� y��ǥ 

	gotoxy(x, y + 0); printf("����������������"); Sleep(100);
	gotoxy(x, y + 1); printf("����������������"); Sleep(100);
	gotoxy(x, y + 2); printf("����������������"); Sleep(100);
	gotoxy(x, y + 3); printf("����� T E T R I S  �����"); Sleep(100);
	gotoxy(x, y + 4); printf("����������������"); Sleep(100);
	gotoxy(x, y + 5); printf("����������������"); Sleep(100);
	gotoxy(x, y + 6); printf("����������������"); Sleep(100);
}