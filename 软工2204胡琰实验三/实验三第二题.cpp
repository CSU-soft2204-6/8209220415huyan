#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int number)
{
	for (int a = 2; a < number; a++)
	{
		if (number % a == 0)
		{
			return false;
		}
		
	}return true;
	}
int main()
{
	int count = 0;
	int number = 2;
	while (count < 200)
	{
		if (is_prime(number))
		{
			count++;
			if (count%10 == 0)
			{
				cout << setw(5)<<number << endl;
			}
			else
				cout << setw(5) << number;
		}
		number++;
	}
	return 0;
}
