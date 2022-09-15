#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector <int>nums{2,2,1,1,1,2,2};
	int limit=nums.size()/2;
	int count =1; 
	sort(nums.begin(),nums.end());
	
	for(int i=0;i<nums.size();i++)
	{
		for(int j=i+1;j<nums.size();j++)
		{
			if(nums[i]==nums[j])
			{
				count++;
				cout<< nums[i] << "at index "<< i<<"  appearing "<<count <<"times"<<endl;
					j=9999;				
			}
		
		}
	
	}
}
