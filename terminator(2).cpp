#include<iostream>
#include<string.h>
using namespace std;

main()
{
	float a=10,b=9,c;
	
	try
	{
		if(b==0)
		{
		  	throw 10;
		}
		else
		{
			c=a/b;
			cout<<"ans = "<<c<<endl;	
		}
	}
	catch(...)
	{
		cout<<"cannot divide by 0";
	}
}
