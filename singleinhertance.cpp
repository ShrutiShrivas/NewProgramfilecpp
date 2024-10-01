#include<iostream>
using namespace std;

class one{
	public:
	int a;
	void set()
	{
		a=3;
	}
	void dis()
	{
		cout<<a<<endl;
	}
	
};
class two:public one
{
	public:
	int b;
	void set1()
	{
		b=4;
	}
	void dis1()
	{
		cout<<b<<endl;
	}
};
int main()
{
	two obj;
	obj.set();
	obj.set1();
	obj.dis();
	obj.dis1();
	
}
