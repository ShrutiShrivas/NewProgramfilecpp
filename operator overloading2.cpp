#include<iostream>
using namespace std;

class one
{
	public:
	int a,b;
	public:
		void set(int x,int y)
		{
			a=x;
			b=y;
		}
		void operator +()
		{
			a=+a;
			b=+b;
		}
		void dis()
		{
			cout<<a<<b;
		}
	
};
int main()
{
	one obj;
	obj.set(-9,8);
	+obj;
	obj.dis();
}
