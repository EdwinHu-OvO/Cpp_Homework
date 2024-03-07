#include"gv.h"
using namespace std;
char key=0;
int difflevl = 3;
int delay = 1000;
int addx = 1;
int addy = 0;
int selection = 1;
apples apple;
char ver[] = "dev2.5.4";
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
		snackB->x = 24;
		snackB->y = 9;
		srand(time(NULL));
		apple = { (rand() % 48) + 1, (rand() % 18) + 1, 0 };
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
		snackB->move(snackB);
		drawgame(apple,snackB);
		snackB->eatapple(snackB,apple);
		liskb(2);
		apple.genApple(apple);
		system("cls");
	}
exittag:;
 }