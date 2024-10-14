#include<iostream>
using namespace std;

class one
{
	public:
		void dis()
		{
			cout<<"one";
		}
};
class two:public one
{
	public:
		void dis()
		{
			
			cout<<"two";
		}
};
int main()
{
	one *obj;
	obj->dis();
	
	two obj2;
	obj=&obj2;
	obj->dis();
	
}
