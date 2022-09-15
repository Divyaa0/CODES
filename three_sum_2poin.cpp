#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   vector<int> nums{-1,0,1,2,-1,-4};
   sort(nums.begin(),nums.end());
   int target=0;
   int start=0;
   int end=nums.size()-1;
   int sum=0;
   while(start < end && end >start)
   {
   	for (int k= start+1;k<end ;k++)
   	{
   	  sum=nums[start]+nums[k]+nums[end];
   		cout<<"sum"<<sum;
   		
   	
	 }
	 	if(sum > target)
   		{
   		  end--;
   		  cout<<"end"<<end;
		}
		else if(sum < target)
		{
			start++;
			 cout<<"start"<<start;
		}
		else
		{
			cout <<sum;
		}
   }
}
