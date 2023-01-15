#include<iostream>
#include<vector>       //vector
#include<string>
#include  <algorithm>  //sort
using namespace std;
template<typename T>
vector<T> intersection(vector<T>& v1, vector<T>& v2)  
{
	vector<T> v;
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v));
	return v;
}     //求两向量的交集
int main()
{
	string i;
	vector<string>v1, v2, v;    
	cout << "输入5个字符串：" << endl;
	while (1)
	{
		getline(cin, i);
		static int h = 0;
		v1.push_back(i);
		h++;
		if (h == 5)
		{
			break;
		}
	};
	cout << endl;
	cout << "再输入5个字符串：" << endl;
	while (1)
	{
		getline(cin, i);
		static int h = 0;
		v2.push_back(i);       
		h++;
		if (h == 5)
		{
			break;
		}
	};
	v = intersection(v1, v2);
	cout << "交集为：";
	for (string n : v)
		cout << n << '\t';   
	return 0;
}

