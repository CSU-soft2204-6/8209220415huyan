#include<iostream>
using namespace std;
int main()
{
	bool list[100];
	for (int i = 0; i < 100; i++)
	{
		list[i] = false;
	}
	for (int j = 0; j < 100; j++)
	{
		for (int k = j; k < 100; k += j+1)
		{
			if (list[k])
				list[k] = false;
			else list[k] = true;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (list[i])
			cout << i+1 << " ";
	}
	return 0;
}

