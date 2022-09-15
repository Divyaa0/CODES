#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector <int>nums{-1,0,1,2,-1,-4};
    // vector <int> fin;
    vector <int> tempo;
     for(int i=0;i<nums.size();i++)
     {
        for(int j =i+1;j<nums.size();j++)
        {
            for(int k=j+1;k<nums.size();k++)
            {
                int sum=nums[i]+nums[j]+nums[k];
                
                    if(sum==0)
                    {
                        
                        tempo.push_back(nums[i]);
                         tempo.push_back(nums[j]);
                          tempo.push_back(nums[k]);
                    }
                    
                
            }
        }
     }
}