#include<iostream>
using namespace std;

class one{
	public:
	int a,b;
	void set(int x,int y)
	{
		a=x;
		b=y;
	}
	void add(one Cobj1)
	{
		Cobj1.a=18;
		Cobj1.b=20;

		
	}
	void display()
	{
		cout<<a<<" "<<b;
	}
};
int main()
{
	one obj1,obj2;
	obj1.set(4,8);
	obj1.add(obj1);
	obj1.display();

}
