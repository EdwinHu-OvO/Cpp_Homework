#include<iostream>
#include<iomanip>
#define ԭ������ main()
#define ԭ��ر� return 0;
#define ԭ��ֹͣ system("pause");
#define ԭ����� cout
using namespace std;
int ԭ������
{
	double m = -1, n = 1, an = 0, sn = 0;
	while (n<=100)
	{
		an = (4 * n - 3) / (4 * n - 1);
		m *= -1;
		sn += an*m;
		n++;
	}
	ԭ����� << setprecision(6) << sn;
	ԭ��ֹͣ
	ԭ��ر�
}