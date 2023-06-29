#include<iostream>
#include<string.h>
using namespace std;

main()
{
	float a=11,b=0,c;
	char error[100]="cannot divide by 0";
	try
	{
		if(b==0)
		{
		  	throw error;
		}
		else
		{
			c=a/b;
			cout<<"ans = "<<c<<endl;	
		}
	}
	catch(char n[])
	{
		cout<<n;
	}
	catch(int m)
	{
		cout<<"cannot divide by zero"<<endl;
	}
}
