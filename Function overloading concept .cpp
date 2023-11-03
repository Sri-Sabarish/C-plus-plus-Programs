#include<iostream>
using namespace std;
float area(float radius)
{
	return(3.14*radius*radius);
	}
	float area(float half,float base, float height)
	{
		return(half*base*height);
	}
	float area(double length,float breadth)
	{
		return(length*breadth);
	}
	int main()
	{
		cout<< "The area of circle is     :"<<area(3)<<endl;
		cout<< "The area of triangle is   :"<<area(0.5,3.5,7)<<endl;
		cout<< "The are of rectangular is :"<<area(3.07,6)<<endl;
	}
	
