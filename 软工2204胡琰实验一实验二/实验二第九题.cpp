#include <iostream>
using namespace std;
int main() {
	float i, s, t, m, j;
	i = 0;
	t = 2;
	m = 0;
	for (s = 0; s <= 100; i++)
	{
		s = s + t;
			m = 0.8 * t + m;
		t = 2 * t;

	}
	m = m - 0.4 * t;
	i = i - 1;
	j = m / i;
		cout << j << endl;
	return 0;
}
