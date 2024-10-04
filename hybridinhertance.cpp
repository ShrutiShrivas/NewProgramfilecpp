#include<iostream>
using namespace std;

class student
{
	public:
	int id;
	char name[20];
	char add[10];
	char phone[10];
	
	void set()
	{
		cout<<"enter id,name,address,phonenum";
		cin>>id;
		cin>>name;
		cin>>add;
		cin>>phone;
		
	}
	void dis()
	{
		cout<<id<<endl;
		cout<<name<<endl;
		cout<<add<<endl;
		cout<<phone<<endl;
		
	}
};
class exam:public student
{
	public:
	char paper1[10];
	char paper2[10];
	int paper1marks;
	int paper2marks;
	
	void setexam()
	{
		cout<<"Enter the paper1 and paper2 ";
		cin>>paper1;
		cin>>paper2;
		cout<<"Enter marks paper1 and paper2";
		cin>>paper1marks;
		cin>>paper2marks;
	}
	void disexam()
	{
		cout<<paper1<<" "<<paper2<<endl;
	
	}
	
};

class sports
{
	public:
	int sptmarks;
	
	void setspmarks()
	{
		cout<<"Enter the sportmarks";
		cin>>sptmarks;
	}
	void disspmarks()
	{
		cout<<sptmarks<<endl;
	}
	
};
class Result:public exam ,public sports
{
	public:
	int totalmarks;
	

	
};
int main()
{
	Result obj;
	obj.set();
	obj.dis();
	obj.setexam();
	obj.disexam();
	obj.setspmarks();
	obj.disspmarks();

	
	obj.totalmarks=obj.paper1marks+obj.paper2marks+obj.sptmarks;
	cout<<obj.totalmarks;
	
}


