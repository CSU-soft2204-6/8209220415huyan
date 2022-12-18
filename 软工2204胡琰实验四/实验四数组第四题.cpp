#include<iostream>
using namespace std;
void merge(int size1, int list1[], int size2, int list2[], int list3[], int size3)
{
	int m;
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for (int k = 0; k < size2; k++)
	{
		list3[size1 + k] = list2[k];
	}
	for (int a = 0; a < size3 - 1; a++)
	{
		for (int b = 0; b < size3 - 1; b++)
		{
			if (list3[b] > list3[b + 1])
				m = list3[b];
			list3[b] = list3[b + 1];
			list3[b + 1] = m;
		}
	}
	for (int i = 0; i < size3; i++)
	{
		cout << list3[i] << " ";
	}
}

int main()
{
	int size1, size2, size3;
	cout << "Enter size1: ";
	cin >> size1;
	cout << "Enter list1: ";
	int list1[999];
	for (int i = 0; i < size1; i++)
		cin >> list1[i];
	cout << "Enter size2: ";
	cin >> size2;
	cout << "Enter list2: ";
	int list2[999];
	for (int i = 0; i < size2; i++)
		cin >> list2[i];
	size3 = size1 + size2;
	int list3[999];
	merge( size1, list1,size2, list2,  list3,size3);
	
	
}
