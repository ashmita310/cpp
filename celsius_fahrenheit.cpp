#include<iostream>
using namespace std;
int main()
{
    float cel=0.0,frh=0.0;
    cout<<"Enter the temperature in celsius:"<<endl;
    cin>>cel;
    frh=(cel*9.0)/5.0+32;
    cout<<"The temperature in fahrenheit:"<<frh<<endl;

    return 0;
}