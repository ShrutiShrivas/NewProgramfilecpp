#include<iostream>
using namespace std;

int spi(float p, float t,float r=7)
{
	int res=((p*r*t)/100);
	cout<<res;
}
int main()
{
	float p,r,t;

	float res=spi(1000,1);

}
