#include <iostream>
using namespace std;

int main()
{
    char ask;
    cin>>ask;

    if(ask=='a'||ask=='e'||ask=='i'||ask=='o'||ask=='u')
    {
        cout<<"vowel"<<ask;
    }
    else{
        cout<<"consonant"<<ask;
    }
}