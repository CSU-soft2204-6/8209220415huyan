#include<iostream>
using namespace std;
int main()
	{
	double a, b, c,L;
	cout << "���Ӵ�С����3���߳�" << endl;
	cin>> a >> b >> c;
	if (a - b < c)
	{
		L = a + b + c;
		cout << "�������ܳ�Ϊ" << L << endl;
		if (a == b || b == c)
		{
			cout << "���������Ǹ�����������" << endl;

		}
		else cout << "�������β��ǵ���������" << endl;
	}
	return 0;
	}
