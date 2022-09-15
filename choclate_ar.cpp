#include<iostream>
#include<vector>
#include<limits>
#include<algorithm>
using namespace std;
int main()
{
	vector <int> nums{};
	int start=0;
	int end= nums.size();
	int mid= start+end/2;
	int target = 5;
	vector <int> indices;
	
         if(nums.size()==1)
        {
            if(nums[0] && nums[1] ==target)
            {
//                return nums;
            }
            else
            {
//                return noo;
            }
            
        }
        
        
        
//        else if(nums.size()==0)
//        {
//        	cout<<"[-1,-1]";
//		}
else
{
	
    while(start <= end)
    {
    	 
       if(nums[mid]==target)
	   {
//	   	cout<<mid;
	   	 for(int i= start ; i <= end ; i++)
	   	 {
	   	 	if(nums[i]==target)
	   	 	{
//	   	 		cout<< i <<endl;
              indices.push_back(i);
	   	 		
			}
		 }
		return 0;
	   }
	   
	   else if(nums[mid]>target)
	   {
	   
	   	end=mid-1;
		}	
		
		else
		{
				cout<<"hh";
			start=mid+1;
		}
		mid= start+end/2;
	}
}
}
