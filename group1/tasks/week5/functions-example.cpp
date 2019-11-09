#include <iostream>
#include <cmath>

using namespace std;
bool is_valid_triangle(double, double, double);

double area_of_triangle(double a, double b, double c)
{
	if(is_valid_triangle(a, b, c) == true)
	{	
		double result = 0;
		double semiarea = (a + b + c)/2;
		result = sqrt(semiarea*(semiarea-a)*(semiarea-b)*(semiarea-c));
		return result;
	}
	else
	{
		return -1;
	}
}

bool is_valid_triangle(double a, double b, double c)
{
	bool first = (a + b) > c;
	bool second = (a + c) > b;
	bool third = (b + c) > a;

	if(first == true && second == true && third == true)
	{
		return true;
	}

	return false;
}

void print_area(double a, double b, double c)
{
	double area = area_of_triangle(a, b, c);
	if(area == -1)
	{
		return;
	}
	cout << "The area of the triangle is: " << area << endl;
}

void input(double& var)
{
	cout << "Please enter a number: ";
	cin >> var;

	cout << endl;
}


int main()
{
	double a = 0, b = 0, c = 0;
	input(a);
	input(b);
	input(c);
	print_area(a, b, c);
	return 0;
}
