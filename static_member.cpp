#include<iostream>
using namespace std;
	static int a;
class one 
{
	public:


	int b;
	
	void set()
	{
		a++;
	}
	void dis()
	{
		cout<<a<<endl;
	}
};

int main()
{
	one obj1,obj2,obj3;
	
	obj1.dis();
	obj2.dis();
	obj3.dis();
	
	obj2.set();
	obj1.dis();
	obj2.dis();
	obj3.dis();
}
