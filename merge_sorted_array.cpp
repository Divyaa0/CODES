#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector <int>nums1 {0};
	vector <int>nums2 {1};
	int m=nums1.size();
	int n=nums2.size();
    
    for(int i=0;i<nums1.size();i++)
    {
    
    	if(nums1[i]==0)
    	{
    		for(int j=0;j<nums2.size();j++)
    		{
//    			cout<<"value of nums2"<<nums2[j]<<endl;
    			swap(nums1[i],nums2[j]);
			}
    		
		}
		
	}
	sort(nums1.begin(),nums1.end());
	for(int k:nums1)
	{
		cout<<k;
	}
}
