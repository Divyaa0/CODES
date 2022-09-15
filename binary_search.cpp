#include<iostream>
using namespace std;

int binary_search(int n , int arr[], int key)
{
//   int sizee=sizeof(arr)/sizeof(arr[0]);
  int start=0;
  int end=n-1;
  int mid=start+end/2;
  while(start <= end)
  {
     if(arr[mid]==key)
     {
        cout<<"mid is at "<<mid;
       return mid;
     }
     else if(arr[mid]>key)
     {
        end=mid-1;
     }
     else
     {
        start=mid;
     }
  }
  return -1;
}

int main()
{
    int n;
    cout<<"size";
    cin>>n;

    int arr[n];
    cout<<"elements";
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    int key;
    cout<<"search element";
    cin>>key;

    cout<<binary_search(n,arr,key);
}