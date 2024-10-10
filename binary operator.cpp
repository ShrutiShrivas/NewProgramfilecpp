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
		one operator +(one obj2)
		{
		one tob;
		tob.a=a+obj2.a;
		tob.b=b+obj2.b;
		return(tob);

		}
		 void dis()
		{
		cout<<a<<b;
		}

};


int main()
{
	one obj1,obj2,obj3;
	
	obj1.set(8,9);
	obj2.set(9,3);

	obj3=obj1+obj2;
	obj3.dis();
	
		
}
