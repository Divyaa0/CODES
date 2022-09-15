#include<iostream>
using namespace std;

int Bin_search(int nums[],int target,int size)
{
	int start=0;
	int end=size;
	int mid=(start+end)/2;
	
	while(start <= end)
	{
		if(target==nums[mid])
		{
			cout<<"the "<<target <<"is at index "<<mid;
			return nums[mid];
		}
		else if(target< nums[mid])
		{
			cout<<"start"<<start;
			end=mid-1;
		}
		else
		{
			cout<<"end"<<end;
			start=mid+1;
		}
		mid=(start+end)/2;
	}
	 
}
int main()
{
	int a1[5]={10,11,12,13,14};
	int a2[5]={3,5,7,9,11};

	Bin_search(a1,14,5);
}
