#include <iostream>
using namespace std;
// find maximum of 3 numbers
int main()
{
 int num1,num2,num3;
 cout<<"enter num1 , num2 , num3";
 cin>>num1>>num2>>num3;


 if(num1>num2)
 {
    if(num1>num3)
    {
       cout<<num1<<endl;
    }
    else
    {
         cout<<num3<<endl;

    }
 }
 else
 {
    if(num2>num3)
    {
       cout<<num2<<endl;
    }
    else
    {
         cout<<num3<<endl;

    }
 }
 return 0;

}
                            // int main(){

                            // int a,b,c;
                            // cin>>a>>b>>c;

                            // if(a>b){
                            //     if(a>c){
                            // cout<<a<<endl;
                            // }
                            // else{
                            // cout<<c<<endl;
                            // }
                            // }
                            // else{
                            // if(b>c){
                            // cout<<b<<endl;
                            // }
                            // else{
                            // cout<<c<<endl;
                            // }
                            // }

                            // return 0;
                            // }