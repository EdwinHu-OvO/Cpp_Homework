#include<iostream>
#include<iomanip>
#include<conio.h>
#include<Windows.h>
#include<cstdlib>
#include<ctime>
extern int addx;
extern int addy;
class apples
{
public:
	void genApple()
	{
		if (eat == 1)
		{
			x = (rand() % 48) + 1;
			y = (rand() % 18) + 1;
			eat = 0;
		}
	}
public:
	int x;
	int y;
	int eat;
};
class snack
{
public:
	void move()
	{
		x += addx;
		y += addy;
	}
	void eatapple(apples &apple)
	{
		if (x == apple.x&& y == apple.y)
		{
			apple.eat = 1;
		}
	}
public:
	int part;//1 for head;0 for body;3 for end
	int x;
	int y;
	snack* next;
};
extern char key;
extern const int menuw;
extern const int menuh;
extern const int framew;
extern const int frameh;
extern int delay;
extern int difflevl;
extern int selection;
extern apples apple;
void drawmenu(int sletction);
void drawdiffmenu(int sletction);
int drawgame(apples apple,snack*);
int liskb(int mode);