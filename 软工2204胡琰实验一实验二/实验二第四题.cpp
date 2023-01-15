#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char c;
	cout << "please enter an equation" << endl;
	    cin >> a;
		cin >> c;
		cin >> b;
	switch (c)
	{
	case '+':cout << "a+b=" << a + b << endl; break;
	case'-':cout << "a-b=" << a - b << endl; break;
	case'*':cout << "a*b=" << a * b <<endl; break;
	case'%':cout << "a%b=" << a%b << endl; break;
	case'/': {
		if (b == 0)
			cout << "it is wrong" << endl;
		else
			cout << "a/b" << a / b << endl; break; }
	default:cout << "please enter a right equation" << endl; break;
	}
	return 0;
}