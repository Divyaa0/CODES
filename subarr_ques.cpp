// isyana question : apna college
// to find th record breaking greater value which is greater than the previous and following element;

#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int arr[]={1,-2,4};
    int max=arr[0];
    for(int i=0;i<4;i++)
    {
        for(int j=i;j<4;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
                 cout<<sum<<endl;
                 if(sum>max)
                 {
                    max=sum;
                
                 }
            }
           
        }
        
    }
    cout<<"maximum subarray is"<<max;
}