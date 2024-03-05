#include <iostream>
using namespace std;
long long F(int);
void main(){
	int n;
	cin >> n;
	cout << F(n);
	system("pause");
}
long long oddfun(int i)
{
	//递推公式 2 * 4 *6 *8 .... 2(i-1) * 2i
	//最小规模 n = 1 oddfun(1) = 1
	if (i == 1)
	{
		return 2;
	}
	else return F(i - 1) * (2 * i);
}