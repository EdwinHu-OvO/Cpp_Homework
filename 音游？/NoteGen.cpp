#include<iostream>
#include<ctime>
#include"head.h"
using namespace std;
void NoteGen()
{
	srand(time(nullptr));
	note = new char[100];
	for (int row = 0; row < 10; row++)
	{
		for (int line = 0; line < 10; line++)
		{
		int numPerRow = rand() % 10;

		}
	}
}