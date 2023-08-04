#include<iostream>    //Amstrong number
using namespace std;
int main()

{
	int x,y,remainder,result=0;
	cout<<"Enter a number:";
	cin>>x;
	y=x;
	while(y!=0)
	{
		remainder=y%10;
		result +=remainder*remainder*remainder;
		y/=10;
	}
	if(result==x)
	cout<<x<<" is an Amstrong number.";
	else
	cout<<x<<" is not an Amstrong number.";
	return 0;
}
