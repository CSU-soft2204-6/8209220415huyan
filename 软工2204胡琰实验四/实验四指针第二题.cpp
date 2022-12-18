#include<iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int n;
	int num=0;
	n = strlen(hexString);
	for (int i = 0; i < n; i++)
	{
		if (hexString[i] > '0' && hexString[i] < '9')
		{
			num = num + (hexString[i] - '0') * pow(16, n - 1 - i);
		}
		if (hexString[i] > 'a' && hexString[i] < 'f')
		{
			num = num + (hexString[i] - 'a') * pow(16, n - 1 - i);
		}
		if (hexString[i] > 'A' && hexString[i] < 'F')
		{
			num = num + (hexString[i] - 'A') * pow(16, n - 1 - i);
		}
	}
	return num;
}
int main()
{
	int a;
	 const int size = 10;
		char hexString[size];
		cout << "输入十六进制" << endl;
		cin.getline(hexString, size);
		cout << "十进制为：";
		a=parseHex(hexString);
		cout << a << endl;
		return 0;

}