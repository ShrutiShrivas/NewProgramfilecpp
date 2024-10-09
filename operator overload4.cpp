#include<iostream>
using namespace std;

class one
{
	public:
	int a,b;
	void set(int x,int y)
	{
		a=x;
		b=y;
	}
	void operator	++()
	{
		a=++a;
		b=++b;
	}
	void dis()
	{
		cout<<a<<" "<<b;
	}
		
};
int main()
{
	one ob;
	ob.set(4,8);
	++ob;
	ob.dis();
}
