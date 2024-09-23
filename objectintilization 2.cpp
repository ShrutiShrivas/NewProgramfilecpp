#include<iostream>
using namespace std;

class two
{
	int a,b;
public:	void set()
	{
		cin>>a>>b;
	}
	
public:	void dis()
	{
		cout<<a<<" "<<b;
	}
};
int main()
{
	two obj;
	obj.set();
	obj.dis();
	
}
