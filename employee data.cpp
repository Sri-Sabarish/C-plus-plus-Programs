#include<iostream>
using namespace std;
int main()
{
	char x[50] ;
	int age;
	int d;
	
	
	cout<<"Enter the name of an employee                           :\t";
	cin>>x;
	cout<<"Enter the age of "<<x<<"                          :\t";
	cin>>age;
	cout<<"Enter the Date of Birth of "<<x<<"(without space) :\t";
	cin>>d;
	
	
	if(d==10061972)
	cout<<"The Salary of "<<x<<" is                          :Rs.16,39,80,963.00"<<endl;
	else
	cout<<"The Date of Birth of "<<x<<" is Invalid \n Cannot able to process his salary"<<endl;
	
	
}
