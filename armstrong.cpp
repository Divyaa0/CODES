#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arm=0;
    
    while(n>0)
    {
        int lastdigit=n%10;
        arm+=pow(lastdigit,3);
    

    }
    if (arm==n)
    {
        cout<< n << " is a armstrong number !!" ;

    }
    else{
        cout<<"not armstrong";
    }
}