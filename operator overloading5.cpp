#include<iostream>
using namespace std;

class one
{
	public:
		int a,b;
		void operator -()
		{
			cout<<"hii";
		}
	
};
int main()
{
	one obj;
	
	-obj;
}
