#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector <int> nums{0,1,0,3,12};
	sort(nums.begin(),nums.end());
	vector <int>temp;
	for(int i=0;i<nums.size();i++)
	{
		if(nums[i]==0)
		{
		   temp.push_back(nums[i]);
		   nums.pop_front();
		}
		
		nums.insert(nums.begin(),temp.end());
	}
	for(int k:nums)
	{
		cout>>k;
	}
}
