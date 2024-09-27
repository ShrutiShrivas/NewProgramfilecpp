#include<iostream>
using namespace std;

class one
{
	int a,b;
	public:
	one()
	{
		a=2;
		b=4;
	}
	void dis()
	{
		cout<<a<<b;
	}
};

int  main()
{
	one obj1,obj2,obj3;
	obj1.dis();
	obj2.dis();
	obj3.dis();
	
	
	
}
