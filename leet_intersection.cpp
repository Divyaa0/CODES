// intersection leetcode
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> nums1 {4,9,5};
	vector <int> nums2 {9,4,9,8,4};
	vector <int> temp {};

	for(int i=0;i<nums1.size();i++)
	{
		for(int j= 0 ; j <nums2.size();j++)
		{
			if(nums1[i]==nums2[j])
			{
                temp.push_back(nums2[j]);
				cout<<nums2[j];
				nums2[j]=INT16_MIN;
				break;
			}
		}
	}

	
}
