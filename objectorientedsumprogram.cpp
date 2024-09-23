#include<iostream>
using namespace std;

class one
{
	public:
	int num1,num2,res;
	
	void set()
	{
		cout<<"enter the num1 and num2";
		cin>>num1>>num2;
	}
	void cal()
	{
		res=num1+num2;
	}
	void disres()
	{
		cout<<res;
	}
};

int main()
{
	one obj;
	obj.set();
	obj.cal();
	obj.disres();
}
