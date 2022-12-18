#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i=0, j=0;
	cout << "输入十个数" << endl;
	while (i < 10)
	{
		cin >> a[i++];
	}
	cout << "输出结果为：" << endl;
	for (i=0;i < 10; i++)
	{
		for (j=0;j < i; j++)
		{
			if (a[i] == a[j])break;
		}
		if (i == j)
		cout << a[i] << " ";
	}
	return 0;
}
