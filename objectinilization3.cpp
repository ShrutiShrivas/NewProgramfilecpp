#include<iostream>
using namespace std;

class three
{
	int a,b;
public:	void set(int x,int y)
	{
		a=x;
		b=y;
	}
public: void dis()
	{
		cout<<a<<" "<<b;
	}


};
int main()
{
	three obj;
	obj.set(7,3);
	obj.dis();
	
}
