#include<iostream>
using namespace std;
int main()
{
	int num[20],even=0,odd=0;
	for(int i=0;i<10;i++)
	{
		cout<<"\n Enter Number "<<i+1<<"=";
		cin>>num[i];
		if(num[i]%2==0)
	++even;
	else
	++odd;
}
cout<<"\n There are "<< even <<" Even Numbers";
cout<<"\n There are "<< odd <<" Odd Numbers";
}  
