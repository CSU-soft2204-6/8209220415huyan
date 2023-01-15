#include<iostream>
using namespace std;
class Time
{
public:
	void input()
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
		
	}
	void output()
	{
		cout << hour << ":" << minute << ":" << sec << ":" << endl;
	}
private:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;
	cout << "输入时间" << endl;
	t1.input();
	cout << "输出时间" << endl;
	t1.output();
	return 0;
}