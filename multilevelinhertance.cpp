#include<iostream>
using namespace std;

class one
{
	public:
	int a;
	
};
class two:public one
{
	public:
		int b;
	
};
class three :public two
{
	public:
		int c;
		void set3()
		{
			a=2;
			b=4;
			c=5;
		}
		void dis3()
		{
			cout<<a<<" "<<b<<" "<<c;
		}
};
int main()
{
	three obj;

	obj.set3();
	obj.dis3();
}
