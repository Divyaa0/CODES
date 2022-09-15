#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,7,8,5};
    int n=5;
    int temp;
    for(int i =0; i<n; i++)
    {
    	if((i+1)<n)
    	{
    		 swap(a[i],a[i+1]);
		}
		else
		{
			continue;
		}
    }
    for(int j=0;j<n;j++ )
    {
    	cout<<a[j];
	}

    
}