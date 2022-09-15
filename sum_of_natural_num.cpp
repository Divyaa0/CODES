# include <iostream>
using namespace std;

int main()
{
    int ask;
    cin>>ask;
    int sum=0;

    for (int i = 1; i<=ask ; i++)
    {
        sum+=i;
    } 
    cout<<sum;
}