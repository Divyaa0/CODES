#include<iostream>
using namespace std;
int main()
{
    int nums[]={-1,-2};
    int cur_sum=0;
    int max_sum=0;
    for(int i=0;i<2;i++)
    {
      if(cur_sum < cur_sum+nums[i])
      {
         cur_sum=cur_sum+nums[i];
          cout<<cur_sum<<endl;
      }

      if( cur_sum>max_sum)
      {
        max_sum=cur_sum;
        cout<<max_sum<<endl;
      }
    }
}