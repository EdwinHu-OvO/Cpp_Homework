#include<iostream>
#include<iomanip>
#include<conio.h>
#include<Windows.h>
#include<cstdlib>
#include<ctime>
struct snack
{
	int part;//1 for head;0 for body;3 for end
	int x;
	int y;
	snack* next;
};
struct apples
{
	int x;
	int y;
	int eat;
};
extern char key;
extern const int menuw;
extern const int menuh;
extern int delay;
extern int difflevl;
void drawmenu(int sletction);
void drawdiffmenu(int sletction);
int drawgame(int apx,int apy,snack*);