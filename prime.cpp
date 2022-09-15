# include<iostream>
using namespace std;
int main()
{
    int ask;
    cin>>ask;

   for (int i =2 ; i < ask ; i++)
   {
    if(ask %i==0)
    {
        cout<<"not prime";
        break;  
    }

   }
   cout<<"prime";
}
