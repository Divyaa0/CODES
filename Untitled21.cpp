#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	vector <int> nums {1,2,3,1};
	sort(nums.begin(), nums.end());
	int count=0;
	 for(int i=0; i<nums.size() ;i++)
	 {
        if(nums[i]==nums[i++])
		{
			count ++;
		}
	 }
	 if( count > 0)
	 {
		return true;
		cout <<"true";
	 }
	 else{
		return false;
		cout <<"false";
	 }
	 

}
