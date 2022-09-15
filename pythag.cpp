#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x,y,z;
    int a,b,c;
    cin>>x>>y>>z;
    
    if(x>y)
    {
        if(x>z)
        {
            cout<<"greater : "<<x;
            a=x;
        }
        else
        {
              cout<<"greater : "<<z;
              a=z;
        }
    }
    else
    {
        if(y>z)
        {
            cout<<"greater : "<<y;
            a=y;
        }
        else
        {
              cout<<"greater : "<<z;
              a=z;
        }

    }
    cout<<"the value of a is "<<a;

    if( a==x)
    {
        b=y;
        c=z;
    }
    else if (a==y)
    {
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;

    }
    cout<<"b is" <<b << " c is "<<c; 
    if(a*a==b*b+c*c)
    {
        cout<<"triplet is pythagrorous";
    }
    else{
        cout<<"not pythagrorous";
    }
    
}