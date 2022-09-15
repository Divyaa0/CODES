#include<iostream>
using namespace std;

int linear_search(int arr[],int n , int search)
{
   for(int j=0;j<n;j++)
   {
    if(arr[j]==search)
    {
        cout<<arr[j];
        return 3;
    }
   }
   cout<<"not found";
   return -1;
}

int main()
{
    cout<<"size";
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int search;
    cout<<"enter search";
    cin>>search;
cout<<linear_search(arr,n,search);
   
}