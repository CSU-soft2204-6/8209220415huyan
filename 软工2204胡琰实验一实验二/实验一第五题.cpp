#include<iostream>
using namespace std;
int main()
{
	double c, f;
	cout << "输入华氏温度" << endl;
	cin >> f;
	c = 5.0 * (f - 32.0) / 9.0;
	c = (int)(c * 100 + 0.5) / 100.0;
	cout << "对应的摄氏温度为" <<c << endl;



	return 0;
}