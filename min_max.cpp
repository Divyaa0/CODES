#include<iostream>
using namespace std;

int main()
{
    int min,max=0;
  
int ar[]={1,2,33,4,7};

int arrSize = sizeof(ar)/sizeof(ar[0]);

 for(int i =1; i< arrSize; i++)
 {
    
     if(ar[i]>ar[max])
     {
        ar[max]=ar[i];
     }
     
  
 }
    cout<<"  max "<<ar[max] <<"\n";
    cout<<"  min "<<ar[min] <<"\n";
 
}