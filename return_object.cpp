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
	one add(one Cobj2 )
	{
	one tob;	
		tob.a=a+Cobj2.a;
		tob.b=b+Cobj2.b;
		return tob;
	}
	void display()
	{
		cout<<a<<" "<<b;
	}

};
int main()
{
	one obj1,obj2,obj3;
	
	obj1.set(2,3);
	obj2.set(4,5);
	
	obj3=obj1.add(obj2);
	obj3.display();
}
