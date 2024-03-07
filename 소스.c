/*
#include <stdio.h>
#include <stdlib.h>


int x = 2;
int y = 4;

void map()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (x == j && y == i)
			{
				printf("K");
				continue;
			}
			printf("X");
		}
		printf("\n");

	}
}

void go_up()
{
	if (y - 1 < 0)
	{
		map();
		return;
	}
	y--;
	map();
}


void go_down()
{
	if (y + 1 > 4)
	{
		map();
		return;
	}
	y++;
	map();
}

void go_right()
{
	if (x + 1 > 4)
	{
		map();
		return;
	}
	x++;
	map();
}

void go_left()
{
	if (x - 1 < 0)
	{
		map();
		return;
	}
	x--;
	map();
}

void end_game()
{
	exit(0);
}

int main()
{
	char c;
	map();

	while (1)
	{
		printf("command : ");
		scanf_s(" %c", &c, 1);


		switch (c)
		{
		case 'w':
			go_up();
			break;
		case 's':
			go_down();
			break;
		case 'd':
			go_right();
			break;
		case 'a':
			go_left();
			break;
		case 'q':
			end_game();
			break;
		default:
			map();
			break;
		}
	}

	return 0;
}
*/