#include<iostream>
using namespace std;
class changfangzhu
{
public:
	changfangzhu(double l, double w, double h)
	{
		length = l;
		width = w;
		height = h;
		v = l * w * h;
   }
	void show()
	{
		cout << "体积为" << v << endl;
	}
	double length;
	double width;
	double height;
	double v;
};
int main()
{
	double l1, w1, h1;
	cout << "输入长宽高" << endl;
	cin >> l1 >> w1 >> h1;
	changfangzhu c1(l1,w1,h1);
	c1.show();
	double l2, w2, h2;
	cout << "输入长宽高" << endl;
	cin >> l2 >> w2 >> h2;
	changfangzhu c2(l2,w2,h2);
	c2.show();
	double l3, w3, h3;
	cout << "输入长宽高" << endl;
	cin >> l3 >> w3>> h3;
	changfangzhu c3(l3,w3,h3);
	c3.show();
	return 0;

}