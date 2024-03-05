#include<iostream>
#include<iomanip>
#include<conio.h>
#include<Windows.h>
#include<cstdlib>
#include<ctime>
class snack
{
public:
	int part;//1 for head;0 for body;3 for end
	int x;
	int y;
	snack* next;
};
class apples
{
public:
	void genApple(int eat, apples &apple)
	{
		if (eat == 1)
		{
			apple.x = (rand() % 48) + 1;
			apple.y = (rand() % 18) + 1;
			apple.eat = 0;
		}
	}
public:
	int x;
	int y;
	int eat;
};
extern char key;
extern const int menuw;
extern const int menuh;
extern const int framew;
extern const int frameh;
extern int delay;
extern int difflevl;
extern int addx;
extern int addy;
extern int selection;
extern apples apple;
void drawmenu(int sletction);
void drawdiffmenu(int sletction);
int drawgame(int apx,int apy,snack*);
int liskb(int mode);