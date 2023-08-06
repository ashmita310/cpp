#include<iostream>
using namespace std;
int main()
{
    int length=8;
    int num1 = 0, num2 = 1, num3 =0;
    cout <<"Fibonacci series is :";
    for (int i=0; i<length; i++)
    {
        cout<<num1<<" ";
        num3= num1+num2;
        num1 =num2;
        num2=num3;
    }
    return 0;
}