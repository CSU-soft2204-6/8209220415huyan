#include<iostream>
using namespace std;
int main()
{
	double x, y;
	cin >> x;
	if (0 <x&&x<10)
	{
		if (0 < x&&x<1)
		{
			y = 3 - 2 * x;
		}
		else if (x < 5)
			y = 2 / (4 * x) + 1;
		else y = x * x;
			cout << "y=" << y << endl;

	}
	return 0;
}