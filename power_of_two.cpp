#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n=99;
    
    for(int i =0; i<=30 ; i++)
    {
       int resu=pow(2,i);

       if(n==resu)
       {
        return true;
       }

    }
    return false;
}