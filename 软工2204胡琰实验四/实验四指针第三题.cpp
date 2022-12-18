#include<iostream>
using namespace std;
void t(int* a, int num1)
{
	int m;
	for (int i = 0; i < num1-1; i++)
	{
		for (int k = 0; k < num1 - 1; k++)
		{
			if (a[k] > a[k + 1])
			{
				m = a[k];
				a[k] = a[k + 1];
				a[k + 1] = m;
			}
		}
	}
}
int main()
{
	int n;
	cout << "输入数组元素的个数" << endl;
	cin >> n;
	int* p = new int[n];
	cout << "输入数组" << endl;
	int i = 0;
	while (i < n)
	{
		cin >> p[i++];
	}
	t(p, n);
	for (int t = 0; t < n; t++)
	{
		cout << p[t] << " ";
	}
	delete[]p;
	return 0;
}
