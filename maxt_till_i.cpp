#include<iostream>
using namespace std;

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

   
    int mxx=-199999;
    int maxi=0;
   
cout<<"output"<<endl;

    for(int i = 0; i <n;i++)
    {

       mxx=max(mxx,ar[i]);
        cout<<mxx<<endl;
       
    }
    cout<<"output2"<<endl;

    for(int j =1 ; j< n;j++)
    {
        if(ar[j]>ar[maxi])
        {
          ar[maxi]=ar[j];
        
        }
          cout<<ar[maxi];
    }
   

     
}