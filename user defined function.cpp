#include<iostream>
using namespace std;
int display()
{
	int a,b,s;
	cout<<"\nEnter two numbers:";
	cin>>a>>b;
	s=a+b;
	return s;
}
int main()
{
	int m=display();
	cout<<"\n\t The Sum is:"<<m;
	return(0);
}

