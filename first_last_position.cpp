#include<iostream>
#include<vector>
using namespace std;
 
vector <int> first(vector <int>&nums ,int target)
    {
    	vector <int>fin{};
    vector <int>noo {-1,-1};
    int start=0;
    int a=99111;
    int end= nums.size();
    int mid =start +end /2;
    	while(start <= end)
    	{
    		if(nums[mid]==target)
    		{
    			a=mid;
    			fin.push_back(mid);
    			end=mid-1;
    		
			}
			
			else if(nums[mid]>target)
			{
				end=mid-1;
			}
			else
			{
				start=mid+1;
			}
			mid=start+end/2;
		}
		return a;
		
	}
	vector <int> last(vector <int>&nums ,int target)
	{
		vector <int>fin{};
    vector <int>noo {-1,-1};
    int start=0;
    int end= nums.size();
    int mid =start +end /2;
    int a=-1111;
		while(start <= end)
    	{
    		if(nums[mid]==target)
    		{
    			a=mid;
    			fin.push_back(mid);
    			start=mid+1;
    		
    			
			}
			
			else if(nums[mid]>target)
			{
				end=mid-1;
				
			}
			else
			{
				start=mid+1;
			}
			mid=start+end/2;
			
		}
		return a;
		
		
	}

int main()
{
	vector <int> nums{5,7,7,8,9};
    
    first(nums ,7);
    last(nums ,7);
    
    
}
