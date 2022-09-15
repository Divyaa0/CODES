#include<iostream>
using namespace std;
int main()
{
    int nums[]={23,2,4,6,7};
    int k=6;

     for(int i=0;i<5;i++)
        {
            for(int j=i;j<5;j++)
            {
                int sum=0;
                for(int k =i;k<j;k++)
                {
                    sum+=nums[k];
                   
                }
                 if(sum==k)
                    {
                        // return sum;
                        cout<<sum<<endl;
                    }
            }
        }
    
}