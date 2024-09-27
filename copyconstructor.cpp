#include<iostream>
using namespace std;

class one
{
	int a,b;
	public:
	one(int x,int y)
	{
		a=x;
		b=y;
	}
	one(one &obj1)
	{
		a=obj1.a;
		b=obj1.b;
	}
	void dis()
	{
		cout<<a<<b;
	}

};
int main()
{
	one obj1(23,4);
	
	one obj2(obj1);
	obj1.dis();
	obj2.dis();
}
