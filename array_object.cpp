#include<iostream>
using namespace std;

class employee
{
	public:
	int id;
	char name[10];
	char mob[10];
	
	void setdata();
	void getdata();
};
void employee::setdata()
{
	cout<<"enter the id";
	cin>>id;
	cout<<"enter the name";
	cin>>name;
	cout<<"enter the mob";
	cin>>mob;
	
}
void employee::getdata()
{
	cout<<id<<endl;
	cout<<name<<endl;
	cout<<mob<<endl;
};

int main()
{
	employee obj[5];
	for(int i=0;i<=5;i++)
	{
		obj[i].setdata();
	}
	for(int i=0;i<=5;i++)
	{
		obj[i].getdata();
	}
	
};
