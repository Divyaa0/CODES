#include<iostream>
using namespace std;
#include <vector>
int main()
{
    vector <int> nums{-1,0,1,2,-1,-4};
    int target=0;
     
    for(int i=0;i<nums.size();i++)
    {
        
        cout<<"i value"<<nums[i]<<endl;
        for(int j=i+1;j<nums.size();j++)
        {
            cout<<" j  value"<<nums[j]<<endl;
            for(int k=j+1;k<nums.size();k++)
            {
                 cout<<" k value"<<nums[k]<<endl;
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target)
                {
                    cout<<nums[i]   <<nums[j]   <<nums[k]<<endl;
                }

            }
        }
    }
}
