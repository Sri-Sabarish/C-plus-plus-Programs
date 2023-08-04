#include<iostream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<iomanip>
using namespace std;
int main()
{
	char a,b,c,d;
	cout<<"\n";
	cout<<"\t  Character Function ctype.h :"<<endl;
	cout<<"\t*******************************"<<endl;
	cout<<"\n";
	cout<<"\t 1) isalpha"<<endl;
	cout<<"\t************"<<endl;
	cout<<"\n";
	cout<<setw(25)<<" Enter a Character:"<<"\t"<<setw(45);
	cin>>a;
	cout<<"\n";
	cout<<setw(25)<<"The Return Value is:"<<"\t"<<isalpha(a)<<setw(45)<<endl;
	
	cout<<"\n";
	cout<<"\t 2)isalnum"<<endl;
	cout<<"\t*************"<<endl;
	cout<<"\n";
	cout<<setw(25)<<" Enter a Character: "<<"\t"<<setw(45);
	cin>>b;
	cout<<"\n";
	cout<<setw(25)<<"The Return Value is:"<<"\t"<<isalnum(b)<<setw(45)<<endl;
	
	cout<<"\n";
	cout<<"\t 3) islower"<<endl;
	cout<<"\t************"<<endl;
	cout<<"\n";
	cout<<setw(25)<<"Enter a Character:"<<"\t"<<setw(45);
	cin>>c;
	cout<<"\n";
	cout<<setw(25)<<"The Return Value is:"<<"\t"<<isdigit(c)<<setw(45)<<endl;
	
	cout<<"\n";
	cout<<"\t 4) isupper"<<endl;
	cout<<"\t************"<<endl;
	cout<<"\n";
	cout<<setw(25)<<"Enter a Character:"<<"\t"<<setw(45);
	cin>>d;
	cout<<"\n";
	cout<<setw(25)<<"The Return Value is:"<<"\t"<<isupper(d)<<setw(45)<<endl;
	
	cout<<"\n";
	char e=toupper('K');
	cout<<"\t 4) toupper"<<endl;
	cout<<"\t************"<<endl;
	cout<<"\n";
	cout<<setw(25)<<"Enter a Character:"<<"\t"<<setw(45);
	cin>>e;
	cout<<"\n";
	cout<<setw(25)<<"The Return Value is:"<<"\t"<<toupper('E')<<setw(45)<<endl;
	
	
}
	
    
