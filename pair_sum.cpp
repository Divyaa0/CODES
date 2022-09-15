#include<iostream>
using namespace std;
int main()
{
	int nums[]={2,7,11,15};
	int target=9;
	int sum=nums[0];
	for(int i=1;i<4;i++)
	{
		sum+=nums[i];
		if(sum==target)
		{
			cout<<sum;
			
		}
		sum=nums[i];
	}
}
