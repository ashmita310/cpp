#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"Numbers before swapping:"<<"a:"<<a<<" "<<"b:"<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Numbers after swapping:"<<"a:"<<a<<" "<<"b:"<<b<<endl;

    return 0;
}