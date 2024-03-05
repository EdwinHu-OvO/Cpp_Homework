#include<iostream>
using namespace std;
void main()
{
	int* ptr;
	ptr = (int*)malloc(100*sizeof(int));
	int i = 1;
	for (; ptr != NULL;)
	{
		ptr = (int*)malloc(100 * sizeof(int));
		//ptr = new int[100];
		i++;
		//cout << i*sizeof(int[100]) << endl;
	}
	cout << i*sizeof(int[100])<< endl;
	//system("pause");
}