# include <iostream>
using namespace std;
int main()
{
    int ask;
    cin>>ask;
    int facto=1;

    for(int i = ask; i >=1 ; i --)
    {
       facto *= i;

    }
       cout<<facto;
}