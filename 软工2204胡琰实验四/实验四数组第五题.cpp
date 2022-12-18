#include<iostream>
using namespace std;
int indexof(char* s1, char *s2)
{
int a, b,n;
a = strlen(s1);
b = strlen(s2);
bool *s3 = new bool[a];

for (int i = 0; i < b - a + 1; i++)
{
	for (int m = 0; m < a; m++)
	{
		s3[m] = false;
	}
	for (int j = 0,  k = i; (j < a) && (k < i + a); j++, k++)
	{
		if (s1[j] == s2[k])
		{
			n = i;
			s3[j] = true;
		}

	}
	int h = 0;
	for (int q = 0; q < a; q++)
	{
		if (s3[q] == false&&i==b-a)
		{
			return -1;
		}
		if (s3[q])
		{
			h++;
		}
	}
	if (h == a)
	{
		return n + 1;
	}
}
	delete[]s3;
}
int main()
{
int size = 999;
char s1[999];
char s2[999];
cout << "输入第一个字符串" << endl;
cin.getline(s1, size);
cout << "输入第二个字符串" << endl;
cin.getline(s2, size);
cout << "indexof(/" << s1 << "/,/" << s2 << "/)is:" << indexof(s1, s2) << endl;
return 0;
}