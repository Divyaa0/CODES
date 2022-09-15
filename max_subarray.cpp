#include<iostream>
using namespace std;

int main()
{
    int ar[]={1,2,4,9};
    
    for(int i =0;i<4;i++)
    {
        int sum=0;
        for(int j =i ; j< 4;j++)
        {
            for(int k =i;k<j;k++)
            {
            sum+=ar[k] ;
            cout<<sum<<endl;
            }
        }
    }
}
