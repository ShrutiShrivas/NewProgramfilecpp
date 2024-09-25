#include<iostream>
using namespace std;
//call by value in c++
class one
{
	public:
	int a,b;
	void set(int x,int y)
	{
		a=x;
		b=y;
		
	}
	void add(one Cobj2)
	{
		int c=Cobj2.a+a;
		int d=Cobj2.b+b;
		cout<<c<<" "<<d;
	}
};
int main()
{
	one obj1,obj2;
	obj1.set(2,4);
	obj2.set(4,2);
	
	//copy of arguments
	obj1.add(obj2);
	
}
