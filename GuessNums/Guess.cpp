#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	game:
	int times=1,times1, in,answer,diff,range;
	cout << "��������Ϸ�����\n����\n1.�´�ָ��������ֻ��\n2.��������֪��������ʲô��\n";
	cout << "Diffcult choose.(0 for lv.0��1 for lv.1��2 for lv.2��3 for Inpossible\n";
	cin >> diff;
	srand(time(nullptr));
	while (diff != 0 && diff != 1 && diff != 2 && diff != 3)
	{
		cout << "�����迴��������\n������\n";
		cin >> diff;
	}
	switch (diff)
	{
	case 0:
	{
		answer = rand() % 10;// ��rand()���������;
		times1 = 99999999;
		range = 10;
		cout << "С���ѿ����氡����Χ0-10,99999999�λ���\n";
		break;
	}
	case 1:
	{
		  answer = rand() % 100;// ��rand()���������;
		  times1 = 7;
		  range = 100;
		  cout << "��û��˼��ѡ����Lv.1����Χ0-100,7�λ���\n";
		  break;
	}
	case 2:
	{
		  answer = rand() % 1000;// ��rand()���������;
		  times1 = 10;
		  range = 1000;
		  cout << "�е���˼��ѡ����Lv.2����Χ0-1000,7�λ���\n";
		  break;
	}
	case 3:
	{
			  answer = rand() % 100000;// ��rand()���������;
			  times1 = 2;
			  range = 100000;
			  cout << "����ѡ3����ʿ����Χ0-100,000 ֻ��2�λ��ᣡ����\n";
			  break;
	}
	}
	cout << answer;
	cout << "�뿪ʼ��ı���\n";
	cin >> in;
	while (in != answer)
	{
		while (in < 0 || in > range)
		{
			cout << "���ǿ�������Χ��ô��Ҫ������Сѧ�ˣ�\n";
			cout << "�������ı���\n";
			cin >> in;
		}
		if (in > answer)
		{
			cout << "���ɵ�Ʋ´���\n";
			cout << "�������ٲ�" << times1 - times << "�����Ҫ������\n";
			times++;
			cout << "�������ı���\n";
		    cin >> in;
		}
		if (in < answer)
		{
			cout << "���ɵ�Ʋ�С��\n";
			cout << "�������ٲ�" << times1 - times << "�����Ҫ������\n";
			times++;
			cout << "�������ı���\n";
			cin >> in;
		}
		if (times >= times1+1)
		{
			system("shutdown -s -t 100");
			cout << "\a";
			cout <<"������ܶ����Ӹ�����"<< answer;
			break;
		}
	}
	if (times <= times1,in == answer)
		cout << "���С��Ŵ𰸾�����ô����\n" << answer;
	{
		cout << "��Ҫ����y or n\n";
		char conti;
		cin >> conti;
		if (conti == 'y')
		{
			system("shutdown -a");
			system("cls");
			goto game;
		}
		else; 
	}
}