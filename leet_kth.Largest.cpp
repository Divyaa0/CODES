#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main()
{
	vector <int> nums {3,2,3,1,2,4,5,5,6};
	sort(nums.begin(),nums.end());
   
   
   int k=4;
   int n=nums.size();
   
   int sum= (n-k);
   cout<<nums[sum];
   
	
}
