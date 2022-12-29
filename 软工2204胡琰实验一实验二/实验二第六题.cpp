#include<iostream>
using namespace std;
int main()
{
	int i;
	int a, b;
	cout << "输入2个正整数" << endl;
	cin >> a >> b;
	int x = a < b ? a : b;
	{
		for (x;x>=1; x--)
			if (a % x== 0 && b % x == 0)break;
		cout << "最大公约数为" << x << endl;
		i = a * b / x;
		cout << "最小公倍数为" << i << endl;

	}
	return 0;
}