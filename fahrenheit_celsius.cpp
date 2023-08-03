#include<iostream>
using namespace std;
int main()
{
    float cel=0.0,frh=0.0;
    cout<<"Enter the temperature in fahrenheit:"<<endl;
    cin>>frh;
    cel=(frh-32.0)*5.0/9.0;
    cout<<"The temperature in celsius:"<<cel<<endl;

    return 0;
}