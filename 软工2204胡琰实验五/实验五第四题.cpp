#include<iostream>
#include<cmath>
using namespace std;
class Shape
{
public:
	double s;
	 virtual double area()
	{
		 s = 0.0;
		 return s;
	}
};
const double pi = 3.14159;
class Circle :public Shape
{
private:
	double r;
public:
	Circle(double R)
	{
		r = R;
	}
	double area()
	{
		s = pi * r * r;
		return s;
	}
};
class Square :public Shape
{
private:
	double x;
public:
	Square(double X)
	{
		x = X;
	}
	double area()
	{
		s = x * x;
		return s;
	}
};
class Rectangle :public Shape
{
private:
	double x, y;
public:
	Rectangle(double X,double Y)
	{
		x = X;
		y = Y;
	}
	double area()
	{
		s = x * y;
		return s;
	}
};
class Trapezoid :public Shape
{
private:
	double x, y, h;
public:
	Trapezoid(double X, double Y, double H)
	{
		x = X;
		y = Y;
		h = H;
	}
	double area()
	{
		s = (x + y) * h * 0.5;
		return s;
	}
};
class Triangle :public Shape
{
private:
	double x, y, z;
public:
	Triangle(double X, double Y, double Z)
	{
		x = X;
		y = Y;
		z = Z;
	}
	double area()
	{
		double p = (x + y + z) * 0.5;
		s = pow(p * (p - x) * (p - y) * (p - z), 2);
		return s;
	}
};
int main()
{
	double n = 0;
	Circle circle(10.2);
	Square square(3);
	Rectangle rectangle(3, 4);
	Trapezoid trapezoid(2.0, 4.5, 3);
	Triangle triangle(4, 5, 6);
	Shape* s[5];
	s[0] = &circle;
	s[1] = &square;
	s[2] = &rectangle;
	s[3] = &trapezoid;
	s[4] = &triangle;
	for (int i = 0; i < 5; i++)
	{
		n = n + s[i]->area();
		if (i == 4)
		{
			cout << "面积和为：" << n << endl;
		}
	}
	return 0;
}