#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
	int sum=0;
	vector <int>nums {4,1,2,1,2};
	
	for(int i=0;i<nums.size();i++)
	{
		 sum = sum ^ nums[i];
		cout<<sum<<endl;
	}
}
