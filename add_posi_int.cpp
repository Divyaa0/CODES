// BREAK : used to terminate the loop
// CONTINUE : used to skip the iteration of the loop

#include<iostream>
using namespace std;

int main()
{
    int sum=0;
    int ask;
    for(int i =0; i <=10 ; i ++)
    {
        cout<<"enter number";
        cin>>ask;
        if(ask>0 || ask ==0)
        {
            sum+=i;
        }
        else{
            continue;
        }

    }
    cout<<sum;
}
