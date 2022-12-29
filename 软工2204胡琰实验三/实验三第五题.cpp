#include<iostream>
using namespace std;
int main()
{
	int a;
	int b = 1;
	for (a = 1;a < 10; a++)
	{
		b = (b + 1) * 2;
	}
	cout << "第一天的桃子数为：" << b << endl;
}