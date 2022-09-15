#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main()
{
	vector <int> nums {0,1,0,3,1,2};
	int n= nums.size();
	int s= 0;
	int e= s+1;
	
	while ( s<=n && e<=n  )
	{
		if(nums[s]==0 && nums[e]!= 0)
		
		{
			int temp=nums[e];
			swap (num[s],nums[e]);
			
		}
	}
}
