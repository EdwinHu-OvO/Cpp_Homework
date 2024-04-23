#include"gv.h"
using namespace std;
char key=0;
int difflevl = 3;
int delay = 1000;
int addx = 1;
int addy = 0;
int selection = 1;
int menuCount = 1;
snack* snackB = new snack;
apples apple;
char ver[] = "dev2.6.6";
int main()
{
	while (true)
	{
		switch (menuCount)
		{
		case 1:
			//mainmenu
			
				cout << "Ì°³ÔÉß " << ver << " By EdwinHu-OvO" << endl;
				drawmenu(selection);
				switch (liskb(0))
				{
				case 3:
					//exit
					menuCount = 4;
					break;
				case 2:
					//goto diffmenutag;
					menuCount = 2;
					selection = 1;
					break;
				case 1:
					//goto ingame;
					menuCount = 3;
					selection = 1;
					break;
				}
				system("cls");
				break;
		case 2:
			//diffmenutag
			system("cls");
			cout << "Ì°³ÔÉß " << ver << " By EdwinHu-OvO" << endl;
			drawdiffmenu(selection);
			switch (liskb(1))
			{
			case 2:
				//goto mainmenu;
				menuCount = 1;
				break;
			}
				system("cls");
			break;
		case 3:
			//ingame
			system("cls");
			snackB->part = 1;
			snackB->x = 24;
			snackB->y = 9;
			srand(time(NULL));
			apple = { (rand() % 48) + 1, (rand() % 18) + 1, 0 };
			while (1)
			{
				cout << "Ì°³ÔÉß " << ver << " By EdwinHu-OvO" << endl;
				//Only for Debug
				{
					cout << "Debug information" << endl;
					cout << "Apple pos:" << apple.x << "," << apple.y;
					cout << " Snack pos:" << snackB->x << "," << snackB->y;
					cout << " Diffcult level:" << difflevl;
					cout << endl << "ÏëÉ¶ÄØ£¬»¹Ã»Ð´Íê" << endl;
				}
				snackB->move();
				drawgame(apple, snackB);
				snackB->eatapple(apple);
				liskb(2);
				apple.genApple();
				system("cls");
			}
			break;
		case 4:
			//exit
			return 0;
			break;
		default:
			cout << "³ö´íÁË£¡³¢ÊÔÐÞ¸´¡£¡£";
			menuCount = 1;
			cout << "Return to mainmenu";
			break;
		}
	}
	return -1;
 }