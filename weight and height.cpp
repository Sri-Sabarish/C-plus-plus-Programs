#include<iostream>
using namespace std;
struct student
{
int age;
float height,weight;
}x;
int main()
{ 
cout<<"Enter the age    :"<<endl;
cin>>x.age;
cout<<"Enter the height (in cm):"<<endl;
cin>>x.height;
cout<<"Enter the weight (in kg):"<<endl;
cin>>x.weight;
cout<<"\n";
cout<<"The height of the person is "<<x.height<<" cm"<<endl;
cout<<"The weight of the person is "<<x.weight<<" kg"<<endl;
return 0;
}
