#include <iostream>  
#include <vector>  
using namespace std;  
int main()   
{  
  vector <int> nums{-2,3,2,-3};
  int target=0;
  vector <int> ans;
  for(int i=0;i<nums.size();i++)
  {
    for(int j=i+1;j<nums.size();j++)
    {
      if(nums[i]+nums[j]==target)
      {
         ans.push_back(nums[i]);
         ans.push_back(nums[j]);
      }
    }
  } 
  for(int i=0;i<ans.size();i++)
  {
    cout<<ans[i]<<endl;
  }
}  
