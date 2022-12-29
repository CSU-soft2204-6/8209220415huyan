#include<iostream>
using namespace std;
int gcd(int m, int n)
{
	int k = 1;
	int i = 1;
	while (i <= m && i <=n)
	{
		if (m % i == 0 && n % i == 0)
			k = i;
		i++;
	}
	return k;
}
int lcm(int m, int n)
{
	int k;
	for (int i = 1; i <= m && i <= n; i++)
		if (m % i == 0 && n % i == 0)
			k = i;
			int h;
			h = m * n / k;
				return h;
}
int main()
{
	int m, n;
	cout << "输入2个整数" << endl;
	cout << "m=" ;
	cin >> m;
	cout << "n=" ;
	cin >> n; 
	cout << "最大公因数为" << gcd(m, n) << endl;
	cout <<m<<"and" << n << "最小公倍数" << lcm(m, n) << endl;
	return 0;
}

