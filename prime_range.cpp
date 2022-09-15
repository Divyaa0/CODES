#include<iostream>
#include<math.h>
using namespace std;

bool prime_func(int num)
{
   for(int j =2; j<=sqrt(num);j++)
   {
     if(num%j==0)
     {
        return false;
     }
   }
   return true;

}

int main()
{
 int start;
 cout<<"enter start ;";
 cin>>start;
//  
 int end;
 cout<<"enter end :";
 cin>>end;
//  

for(int i =start ; i <= end ; i++ )
{
    if(prime_func(i))
    {
     cout<<i<<endl;
    }
}
}