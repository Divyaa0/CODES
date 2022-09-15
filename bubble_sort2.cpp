#include<iostream>
using namespace std;

int bubble_sort(int n ,int ar[])
{
    int i,j,temp;
    while( i < n)
    {
        for(j=0 ; j < n-i; j++)
        {
            if(ar[j]>ar[j+1])
            {
               temp=ar[i];
               ar[i]=ar[i+1];
               ar[i+1]=temp;
            }
        }
      i++;
        
    }
    for(int k =0 ; k < n ; k++)
        {
            cout<<ar[k]<<"\t";
        }
     
}

int main()
{
   int n;
   cout<<"size";
   cin>>n;

   int ar[n];
   for(int i = 0 ; i < n ;i++)
   {
    cin>>ar[i];
   }

 
   cout<<bubble_sort(n,ar);
}