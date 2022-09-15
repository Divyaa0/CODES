#include<iostream>
using namespace std;
int main()
{
	int a1[]={4,9,5};
	int a2[]={9,4,9,8,4};
	
	for(int i=0;i<4;i++)
	{
		int ele=a1[i];
		
		for(int j=0;j<2;j++)
		{
			if(ele==a2[j])
			{
				cout<<"a2[j] "<<a2[j];
				a2[j]=-23441;
				break;
			}
		}
	}
	
}
