#include"gv.h"
using namespace std;
const int menuw = 32;
const int menuh = 9;
void drawmenu(int sletction)
{
	for (int i = 0; i < menuh; i++)
	{
		switch (i)
		{
		case 0:
			cout << setw(menuw) << setfill('*') << "*";
			cout << endl;
			break;
		case (menuh - 1) :
			cout << setw(menuw) << setfill('*') << "*";
			cout << endl;
			break;
		case 1:
			cout << "*";
			cout << setw(28) << setfill(' ') << "使用WS选择菜单  空格来确认选项";
			cout << setw(1) << setfill(' ') << right << "*";
			cout << endl;
			break;
		case 2:
			cout << "*";
			if (sletction == 1)
			{
				cout << setw(21) << setfill(' ') << "[#]开始游戏";
				cout << setw(menuw - 22) << setfill(' ') << right << "*";
				cout << endl;
			}
			else
			{
				cout << setw(21) << setfill(' ') << "[ ]开始游戏";
				cout << setw(menuw - 22) << setfill(' ') << right << "*";
				cout << endl;
			}
			break;
		case 4:
			cout << "*";
			if (sletction == 2)
			{
				cout << setw(21) << setfill(' ') << "[#]难度选择";
				cout << setw(menuw - 22) << setfill(' ') << right << "*";
				cout << endl;
			}
			else
			{
				cout << setw(21) << setfill(' ') << "[ ]难度选择";
				cout << setw(menuw - 22) << setfill(' ') << right << "*";
				cout << endl;
			}
			break;
		case 6:
			cout << "*";
			if (sletction == 3)
			{
				cout << setw(19) << setfill(' ') << "[#]退出";
				cout << setw(menuw - 20) << setfill(' ') << right << "*";
				cout << endl;
			}
			else
			{
				cout << setw(19) << setfill(' ') << "[ ]退出";
				cout << setw(menuw - 20) << setfill(' ') << right << "*";
				cout << endl;
			}
			break;
		default:
			cout << "*";
			cout << setw(menuw - 1) << setfill(' ') << right << "*";
			cout << endl;
		}
	}
}
void drawdiffmenu(int sletction)
{
	for (int i = 0; i < menuh; i++)
	{
		switch (i)
		{
		case 0:
			cout << setw(menuw) << setfill('*') << "*";
			cout << endl;
			break;
		case (menuh - 1) :
			cout << setw(menuw) << setfill('*') << "*";
			cout << endl;
			break;
		case 1:
			cout << "*";
			cout << setw(28) << setfill(' ') << "使用WS选择菜单 AD调整难度";
			cout << setw(3) << setfill(' ') << right << "*";
			cout << endl;
			break;
		case 2:
			cout << "*";
			cout << setw(25) << setfill(' ') << "使用空格来确认选项";
			cout << setw(6) << setfill(' ') << right << "*";
			cout << endl;
			break;
		case 4:
			cout << "*";
			if (sletction == 1)
			{
				cout << setw(21) << setfill(' ') << "[#]难度等级 "<<difflevl;
				cout << setw(menuw - 23) << setfill(' ') << right << "*";
				cout << endl;
			}
			else
			{
				cout << setw(21) << setfill(' ') << "[ ]难度等级 " << difflevl;
				cout << setw(menuw - 23) << setfill(' ') << right << "*";
				cout << endl;
			}
			break;
		case 6:
			cout << "*";
			if (sletction == 2)
			{
				cout << setw(18) << setfill(' ') << "[#]返回";
				cout << setw(menuw - 19) << setfill(' ') << right << "*";
				cout << endl;
			}
			else
			{
				cout << setw(18) << setfill(' ') << "[ ]返回";
				cout << setw(menuw - 19) << setfill(' ') << right << "*";
				cout << endl;
			}
			break;
		default:
			cout << "*";
			cout << setw(menuw - 1) << setfill(' ') << right << "*";
			cout << endl;
		}
	}
}