#include<iostream>
using namespace std;

int main()
{
    int temp=0;
 int arr[]={11,12,13,14};
 int size=sizeof(arr)/sizeof(arr[0]);

 for(int j =0 ;j<size-1;j++)
 {
    for(int i = 0 ; i< size-j-1 ; i++)
    {
         if(arr[i]>arr[i+1])
         {
           temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
         }
           
    }
  
 }

 for (int i = 0; i < size; i++)
 {
    /* code */      
    cout<<arr[i]<<"\t";

 }
   
}