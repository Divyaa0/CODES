#include<iostream>
#include <climits>

using namespace std;
int main()
{   int cp=1;
    int mp=INT_MIN;
    int nums[]={1,2,3};

   for(int i=0;i<3;i++)
   {
     cp=max(cp,cp*nums[i]);
     mp=max(cp,mp);
     cout<<mp;
   }
}