#include<iostream>
using namespace std;

void s(double list[10])
{
	;
	bool changed = true;
	int i = 0;
	int a;
	
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (list[j] > list[j + 1])
			{
				a = list[j];
				list[j] = list[j + 1];
				list[j + 1] = a;
				changed = true;
			}
	} while (changed);
	for (int i = 0; i < 10; i++)
	{
		cout << list[i] << " ";
	}
	;
}
int main()
{
	int i = 0;
	double list[10];
	while (i < 10)
	{
		cin >> list[i++];
	}
	s(list);

}