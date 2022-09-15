#include<iostream>
using namespace std;

int main()
{
    int ar[]={1,2,4,9};
    int sum=0;
    for(int i =0;i<4;i++)
    {
        for(int j =i ; j< 4;j++)
        {
            sum+=ar[j] ;
            cout<<sum<<endl;
        }
    }
}
