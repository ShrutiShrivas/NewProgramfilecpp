#include<iostream>
using namespace std;

class one 
{
	public:
	int a,b;
	//parametrizes constructor
	one (int x,int y)
	{
		a=x;
		b=y;
	}
	void dis()
	{
		cout<<a<<" "<<b<<endl;
	}
	 
};
int main()
{
	one obj1(23,4);
	one obj2=one(43,8);
	
	obj1.dis();
	obj2.dis();

	
}
