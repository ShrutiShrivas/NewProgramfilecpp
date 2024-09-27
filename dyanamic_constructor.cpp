#include<iostream>
#include<string.h>
using namespace std;

class one
{
	public:
	char *name;
	int len;
	 one()
	{
		len=0;
		name = new char [len];
		
	}
	one(char st[])
	{
		len=strlen(st);
		name=new char[len+1];
		strcpy(name,st);
		
	}
	void dis()
	{
		cout<<name;
	}
};
int main()
{
	one obj("ramesh");
	obj.dis();
}
