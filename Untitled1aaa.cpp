#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main
{
//	vector<int>nums {3,0,1};
		vector <int>nums {4,1,2,1,2};
	sort(nums.begin(),nums.end());
	
	for(int i=0;i<nums.size();i++)
	{
		int store= nums[i];
		
		if((store+1)==nums[i++])
		{
			cout<<store<<endl;
			cout<<nums[i++];
		}
	}
}
