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
			cout << setw(28) << setfill(' ') << "ʹ��WSѡ��˵�  �ո���ȷ��ѡ��";
			cout << setw(1) << setfill(' ') << right << "*";
			cout << endl;
			break;
		case 2:
			cout << "*";
			if (sletction == 1)
			{
				cout << setw(21) << setfill(' ') << "[#]��ʼ��Ϸ";
				cout << setw(menuw - 22) << setfill(' ') << right << "*";
				cout << endl;
			}
			else
			{
				cout << setw(21) << setfill(' ') << "[ ]��ʼ��Ϸ";
				cout << setw(menuw - 22) << setfill(' ') << right << "*";
				cout << endl;
			}
			break;
		case 4:
			cout << "*";
			if (sletction == 2)
			{
				cout << setw(21) << setfill(' ') << "[#]�Ѷ�ѡ��";
				cout << setw(menuw - 22) << setfill(' ') << right << "*";
				cout << endl;
			}
			else
			{
				cout << setw(21) << setfill(' ') << "[ ]�Ѷ�ѡ��";
				cout << setw(menuw - 22) << setfill(' ') << right << "*";
				cout << endl;
			}
			break;
		case 6:
			cout << "*";
			if (sletction == 3)
			{
				cout << setw(19) << setfill(' ') << "[#]�˳�";
				cout << setw(menuw - 20) << setfill(' ') << right << "*";
				cout << endl;
			}
			else
			{
				cout << setw(19) << setfill(' ') << "[ ]�˳�";
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
			cout << setw(28) << setfill(' ') << "ʹ��WSѡ��˵� AD�����Ѷ�";
			cout << setw(3) << setfill(' ') << right << "*";
			cout << endl;
			break;
		case 2:
			cout << "*";
			cout << setw(25) << setfill(' ') << "ʹ�ÿո���ȷ��ѡ��";
			cout << setw(6) << setfill(' ') << right << "*";
			cout << endl;
			break;
		case 4:
			cout << "*";
			if (sletction == 1)
			{
				cout << setw(21) << setfill(' ') << "[#]�Ѷȵȼ� "<<difflevl;
				cout << setw(menuw - 23) << setfill(' ') << right << "*";
				cout << endl;
			}
			else
			{
				cout << setw(21) << setfill(' ') << "[ ]�Ѷȵȼ� " << difflevl;
				cout << setw(menuw - 23) << setfill(' ') << right << "*";
				cout << endl;
			}
			break;
		case 6:
			cout << "*";
			if (sletction == 2)
			{
				cout << setw(18) << setfill(' ') << "[#]����";
				cout << setw(menuw - 19) << setfill(' ') << right << "*";
				cout << endl;
			}
			else
			{
				cout << setw(18) << setfill(' ') << "[ ]����";
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