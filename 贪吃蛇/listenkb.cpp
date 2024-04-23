#include"gv.h"
using namespace std;
//mode 0 for menu;1for diffmenu;2for ingame
int liskb(int mode,snack* snackB)
{
	switch (mode)
	{
	case 2:
		while (_kbhit())
		{
			switch (_getch())
			{
			case 'w':
				if (snackB->addy == 1 && snackB->addx == 0)
					break;
				if (snackB->addy == -1 && snackB->addx == 0);
				else
				{
					snackB->addy = -1;
					snackB->addx = 0;
				}
				break;
			case 's':
				if (snackB->addy == -1 && snackB->addx == 0)
					break;
				if (snackB->addy == 1 && snackB->addx == 0);
				else
				{
					snackB->addy = 1;
					snackB->addx = 0;
				}
				break;
			case 'd':
				if (snackB->addy == 0 && snackB->addx == -1)
					break;
				if (snackB->addy == 0 && snackB->addx == 1);
				else
				{
					snackB->addy = 0;
					snackB->addx = 1;
				}
				break;
			case 'a':
				if (snackB->addy == 0 && snackB->addx == 1)
					break;
				if (snackB->addy == 0 && snackB->addx == -1);
				else
				{
					snackB->addy = 0;
					snackB->addx = -1;
				}
				break;
			case 'e':
				apple.eat = 1;
				break;
			}
			break;
		}
		return -1;
	default:
		return -2;
	}
}
int liskb(int mode)
{
	switch (mode)
	{
	case 0:
		key = 1;
		while (key)
		{
			key = _getch();
			if (key == 'w' && selection>1)
			{
				selection--;
				break;
			}
			else if (key == 's' && selection<3)
			{
				selection++;
				break;
			}
			else if (key == 32 && selection == 3)
			{
				return 3;
			}
			else if (key == 32 && selection == 2)
			{
				return 2;
			}
			else if (key == 32 && selection == 1)
			{
				return 1;
			}
			else
			{
				key = 1;
				return -1;
			}
		}
		return -1;
	case 1:
		key = 1;
		while (key)
		{
			key = _getch();
			if (key == 'w' && selection>1)
			{
				selection--;
				break;
			}
			else if (key == 's' && selection<2)
			{
				selection++;
				break;
			}
			else if (key == 'd' && selection == 1 && difflevl<3)
			{
				difflevl++;
				break;
			}
			else if (key == 'a' && selection == 1 && difflevl>1)
			{
				difflevl--;
				break;
			}
			else if (key == 32 && selection == 2)
			{
				system("cls");
				return 2;
			}
			else
			{
				key = 1;
				return -1;
			}
		}
	default:
		return -2;
	}
}