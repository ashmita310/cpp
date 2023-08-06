#include<iostream>
using namespace std;
int main()
{
    int num1=12,num2=8;
    cout<<"Numbers before swapping is:"<<num1<<" "<<num2<<endl;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"Numbers after swapping is:"<<num1<<" "<<num2<<endl;
return 0;
}