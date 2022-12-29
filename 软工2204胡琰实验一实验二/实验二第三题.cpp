#include<iostream>
using namespace std;
int main()
	{
	double a, b, c,L;
	cout << "按从大到小输入3个边长" << endl;
	cin>> a >> b >> c;
	if (a - b < c)
	{
		L = a + b + c;
		cout << "三角形周长为" << L << endl;
		if (a == b || b == c)
		{
			cout << "此三角形是个等腰三角形" << endl;

		}
		else cout << "此三角形不是等腰三角形" << endl;
	}
	return 0;
	}
