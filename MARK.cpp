#include<iostream>
using namespace std; 
int main()
{
float m;
cout<<"Enter your mark:";
cin>>m;
if(m>=90 && m<=100)
{
	cout<<"Distinction";
}
else if(m>=80 && m<=89)
{
	cout<<"A Grade";
}
else if(m>=65 && m<=79)
{
	cout<<"B Grade";
}
else if(m>=50 && m<=64)
{
 cout<<"C Grade";
}
else if(m>=35 && m<=49)
{
	cout<<"D Grade";
}
else
{
 	cout<<"You have failed";
}
}






