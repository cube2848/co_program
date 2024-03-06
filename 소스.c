#include <stdio.h>
#include <Windows.h>
#include <conio.h>

#define MAX 5
#define UP 119
#define DOWN 115
#define RIGHT 100
#define LEFT 97
#define END 113

void gotoxy(int x, int y);
void go_up();
void go_down();
void go_right();
void go_left();
void end_game();


int main()
{
	char c;
	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < MAX; j++)
		{
			printf("X");
		}
		printf("\n");
		switch (c)
		{
		case UP:
			go_up;
			break;
		case DOWN:
			go_down;
			break;
		case RIGHT:
			go_right;
			break;
		case LEFT:
			go_left;
			break;
		case END:
			end_game;
		}
	}

	return 0;
}

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void go_up(char c)
{
	int x = 0, y = 0;
	gotoxy(x, y);
	if (_kbhit())
	{
		c = _getch();
		if (c == UP)
		{
			y++;
		}
	}
}

void go_down(char c)
{
	int x = 0, y = 0;
	gotoxy(x, y);
	if (_kbhit())
	{
		c = _getch();
		if (c == UP)
		{
			y--;
		}
	}
}

void go_right(char c)
{
	int x = 0, y = 0;
	gotoxy(x, y);
	if (_kbhit())
	{
		c = _getch();
		if (c == UP)
		{
			x++;
		}
	}
}

void go_left(char c)
{
	int x = 0, y = 0;
	gotoxy(x, y);
	if (_kbhit())
	{
		c = _getch();
		if (c == UP)
		{
			x--;
		}
	}
}

void end_game(char c)
{
	c = _getch();
	if (c == END)
	{
		exit(0);
	}
}