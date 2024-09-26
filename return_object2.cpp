#include<iostream>
using namespace std;

class one
{
	public:
		int H,M,S;
		void set(int x,int y,int z)
		{
			H=x;
			M=y;
			S=z;
			
		}
		one add(one Cobj2)
		{
			//create obj
			one tob;
			tob.H=H+Cobj2.H;
			tob.M=M+Cobj2.M;
			tob.S=S+Cobj2.S;
			
			if(tob.S>=60)
			{
				
				tob.M=tob.M+(tob.S/60);
				tob.S=tob.S%60;
			}
			if(tob.M>=60)
			{
				tob.H=tob.H+(tob.M/60);
				tob.M=tob.M%60;
			}
			
			
			
		
			return tob;
		}
		void display()
		{
			cout<<H<<" "<<M<<" "<<S;
		}
		
};
int main()
{
	one obj1,obj2,obj3;
	
	obj1.set(20,14,80);
	obj2.set(01,16,90);
	
	obj3=obj1.add(obj2);
	obj3.display();
}
