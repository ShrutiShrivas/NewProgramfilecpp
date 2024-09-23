#include<iostream>
using namespace std;

class one
{
	int a,b;
public:	void set()
	{
		a=2;
		b=3;
		
	}
public:	void dis()
	{
		cout<<a<<endl;
		cout<<b<<endl;
	}
};

int main()
{
	one obj;
	obj.set();
	obj.dis();
	
	
}
