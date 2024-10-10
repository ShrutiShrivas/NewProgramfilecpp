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
		void operator +(one obj2)
		{
		int c=a+obj2.a;
		int d=b+obj2.b;
	
		cout<<c<<" "<<d;
		}
		void dis()
		{
		cout<<a<<b;
		}

};


int main()
{
	one obj1,obj2;
	
	obj1.set(2,3);
	obj2.set(5,3);
	obj1+obj2;
	
	
}
