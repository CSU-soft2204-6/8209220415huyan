#include<iostream>
using namespace std;
int main()
{
	int i;
	int a, b;
	cout << "����2��������" << endl;
	cin >> a >> b;
	int x = a < b ? a : b;
	{
		for (x;x>=1; x--)
			if (a % x== 0 && b % x == 0)break;
		cout << "���Լ��Ϊ" << x << endl;
		i = a * b / x;
		cout << "��С������Ϊ" << i << endl;

	}
	return 0;
}