#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
 vector <int> nums {-1,0,1,2,-1,-4};
 sort(nums.begin(),nums.end());
 
 int target=0;
 int s= 0;
 int e= nums.size()-1;
 
 
 while(s< e && e > s )	
 {
 	int sum1= nums[s]+ nums[e];
 	int sum2=0;
 	cout<<"sum1 = " <<sum1 <<endl;
 	
 	
 	for(int k= s+1 ; k< e ;k++)
 	{ 
 	
 	
 		 sum2= sum1+nums[k];
 		 cout<<"sum2 = " <<sum2 <<endl;
 		
 		if( sum2 == target)
 		{
 			cout << nums[s]<<nums[e]<<nums[k]<<endl;
 			s++;
 			e--;
		}
	
	 }
	 	 if (sum2 < target)
		{
			s++;
		}
		
		else
		{
			e--;
		}
		
		sum1=0;
		sum2=0;
 }
}
