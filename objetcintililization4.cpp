#include<iostream>
using namespace std;

class four
{
	public:
	int a,b;
	void display()
	{
		cout<<a<<" "<<b;
	}

	
};
int main()
{
	four obj;
	obj.a=4;
	obj.b=8;
	obj.display();
}
