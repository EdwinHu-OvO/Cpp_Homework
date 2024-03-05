#include"gv.h"
using namespace std;
char key=0;
int difflevl = 1;
int delay = 1000;
int addx = 1;
int addy = 0;
int selection = 1;
apples apple;
char ver[] = "dev1.5.4";
void main()
{
	//goto ingame;//only for dev
mainmenu:
	while (1)
	{
		cout << "Ì°³ÔÉß " << ver <<" By EdwinHu-OvO" << endl;
		drawmenu(selection);
		switch (liskb(0))
		{
		case 3:
			goto exittag;
			break;
		case 2:
			goto diffmenutag;
			break;
		case 1:
			goto ingame;
			break;
		}
		system("cls");
	}
diffmenutag:
	system("cls");
	selection = 1;
	while (1)
	{
		cout << "Ì°³ÔÉß " << ver << " By EdwinHu-OvO" << endl;
		drawdiffmenu(selection);
		switch (liskb(1))
		{
		case 2:
			goto mainmenu;
			break;
		}
		system("cls");
	}
ingame:
	system("cls");
		snack* snackB = new snack;
		snackB->part = 1;
		snackB->x = 1;
		snackB->y = 1;
		srand(time(NULL));
		apple.eat = 1;
		apple.genApple(apple.eat, apple);
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
		if (snackB->x == apple.x&& snackB->y == apple.y)
		{
			apple.eat = 1;
		}
		liskb(2);
		apple.genApple(apple.eat, apple);
		system("cls");
	}
exittag:;
 }