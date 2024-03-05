#include<iostream>
#include<iomanip>
#define 原神启动 main()
#define 原神关闭 return 0;
#define 原神停止 system("pause");
#define 原神输出 cout
using namespace std;
int 原神启动
{
	double m = -1, n = 1, an = 0, sn = 0;
	while (n<=100)
	{
		an = (4 * n - 3) / (4 * n - 1);
		m *= -1;
		sn += an*m;
		n++;
	}
	原神输出 << setprecision(6) << sn;
	原神停止
	原神关闭
}