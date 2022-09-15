#include <iostream>
using namespace std;
int main()
{
    int ask;
    cin>>ask;

    for (int i = 2 ; i < ask-1 ; i ++)
    {
        if(ask % i == 0)
        {
            cout<< i << "is not prime";
            break; 
        }

        else{
            cout<< "prime";
            break;
        }
    }

}