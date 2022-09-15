#include<iostream>
using namespace std;
int main()
{
	int a=0;
	int b=1;
	int sum=0;
	int n=3;

	for(int i=2;i<=n;i++)
	{
			if(n==0)
	{
		cout <<0;
	}
	if (n==1)
	{
		cout<<1;
	}
	
		sum=a+b;
		a=b;
		b=sum;
	
		
	}
		cout<<b;
}
