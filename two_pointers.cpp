#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v{-3,2,3,3,6,8,15};
	sort(v.begin(),v.end());
	int start=0;
	int target=6;
	int end=v.size()-1;
	while(start<end  && end>start)
	{
	
		int sum=v[start]+v[end];
		if(sum == target)
		{
			cout <<"start is" <<  v[start] << "end " << v[end] << " sum " << sum << endl;
			start++;
			end--;
		}
		else if( sum > target)
		{
			end --;
		}
		else
		{
			start ++;
		}
	}
	
}
