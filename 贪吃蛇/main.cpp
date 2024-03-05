#include"gv.h"
using namespace std;
char key=0;
int difflevl = 1;
int delay = 1000;
char ver[] = "dev1.3.2";
void main()
{
	int* selection  = new int;
	goto ingame;//only for dev
mainmenu:
	*selection = 1;
	while (1)
	{
		cout << "Ì°³ÔÉß " << ver <<" By EdwinHu-OvO" << endl;
		drawmenu(*selection);
		//while (!_kbhit())
		key = 1;
		while (key)
		{
			key = _getch();
			if (key == 'w' && *selection>1)
			{
				(*selection)--;
				break;
			}
			else if (key == 's' && *selection<3)
			{
				(*selection)++;
				break;
			}
			else if (key == 32 && *selection==3)
			{
				delete selection;
				goto exittag;
			}
			else if (key == 32 && *selection == 2)
			{
				goto diffmenutag;
			}
			else if (key == 32 && *selection == 1)
			{
				goto ingame;
			}
			else
				key =1;
		}
		system("cls");
	}
diffmenutag:
	system("cls");
	*selection = 1;
	while (1)
	{
		cout << "Ì°³ÔÉß " << ver << " By EdwinHu-OvO" << endl;
		drawdiffmenu(*selection);
		key = 1;
		while (key)
		{
			key = _getch();
			if (key == 'w' && *selection>1)
			{
				(*selection)--;
				break;
			}
			else if (key == 's' && *selection<2)
			{
				(*selection)++;
				break;
			}
			else if (key == 'd' && *selection == 1 && difflevl<3)
			{
				difflevl++;
				break;
			}
			else if (key == 'a' && *selection == 1 && difflevl>1)
			{
				difflevl--;
				break;
			}
			else if (key == 32 && *selection == 2)
			{
				system("cls");
				goto mainmenu;
			}
			else
				key = 1;
		}
		system("cls");
	}
ingame:
	delete selection;
	system("cls");
		snack* snackB = new snack;
		snackB->part = 1;
		snackB->x = 1;
		snackB->y = 1;
		srand(time(NULL));
		apples apple;
		apple.eat = 0;
		apple.x = (rand() % 48) + 1;
		apple.y = (rand() % 18) + 1;
	while (1)
	{
		cout << "Ì°³ÔÉß " << ver << " By EdwinHu-OvO" << endl;
		//Only for Debug
		{
			cout << "Debug information"<<endl;
			cout << "Apple pos:" << apple.x << "," << apple.y;
			cout << " Snack pos:" << snackB->x << "," << snackB->y;
			cout << " Diffcult level:" << difflevl;
			cout << endl <<"ÏëÉ¶ÄØ£¬»¹Ã»Ð´Íê"<<endl;
		}
		drawgame(apple.x,apple.y,snackB);
		while (_kbhit)
		{
			switch (_getch())
			{
			case 'w':
				snackB->y--;
				break;
			case 's':
				snackB->y++;
				break;
			case 'd':
				snackB->x++;
				break;
			case 'a':
				snackB->x--;
				break;
			case 'e':
				apple.eat=1;
				apple.x = (rand() % 48) + 1;
				apple.y = (rand() % 18) + 1;
				break;
			}
			break;
		}
		//Sleep(1000);
		system("cls");
	}
exittag:;
 }