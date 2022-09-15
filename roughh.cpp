#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
	int mini=INT_MAX;
	
	int min_in;
	int maxi=0;
	int max_in;
	int best;
	int j;
	vector<int> nums{2,4,1};
	int sizz=nums.size()-1;
	for(int i=0;i<nums.size();i++)
	{
		if(nums[i]< mini)
		{
			mini=nums[i];
			min_in=i;
			
		}
		
		if(nums[i]> maxi)
		{
			maxi=nums[i]-mini;
			max_in=i;
		}
		
		
	}
cout<<" minimum"<<mini<<endl;
cout<<"maximum"<<maxi<<endl;	
}
