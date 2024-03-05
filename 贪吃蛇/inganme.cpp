#include"gv.h"
using namespace std;
const int frameh = 20;
const int framew = 50;
int drawgame(apples apple,snack* snackB)
{
	switch (difflevl)
	{
	case 1:
		delay = 500;
		break;
	case 2:
		delay = 250;
		break;
	case 3:
		delay = 150;
		break;
	default:
		return -1;
	}
	snackB->x += addx;
	snackB->y += addy;
	for (int i = 0; i < frameh; i++)
	{
		switch (i)
		{
		case 0:
			cout << setw(framew) << setfill('*') << "*";
			cout << endl;
			break;
		case (frameh - 1) :
			cout << setw(framew) << setfill('*') << "*";
			cout << endl;
			break;
		default:
			cout << "*";
			for (int x = 1; x <= 48; x++)
			{
				if (x == apple.x&& i == apple.y)
					cout << '@';
				else if (x == snackB->x&&i == snackB->y)
				{
					switch (snackB->part)
					{
					case 1:
						cout << '+';//Ptint head
						break;
					case 2:
						cout << '*';//Ptint body
						break;
					}
				}
				else
					cout << ' ';
			}
			cout << "*";
			cout << endl;
		}
	}
	Sleep(delay);
	return 1;
}
