#include<iostream>
using namespace std;
int main()
{
    int a=15,b=27,c=8;
    if(a>b && a>c)
    {
        cout<<"A is max"<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"B is max"<<endl;
    }
    else
        cout<<"C is max"<<endl;
return 0;
}