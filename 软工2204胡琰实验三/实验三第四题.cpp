#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double side1, side2, side3;
	cout << "输入三角形三边" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
	{
		cout << "面积为" << double_area(side1, side2, side3) << endl;
	}
	else

		cout << "有问题" << endl;

	return 0;
}