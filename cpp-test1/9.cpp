#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main()
{
    int num1=15,num2=20;
    cout<<"lcm of"<<" "<<num1<<" "<<num2<<" "<<"is"<<" "<<(num1*num2)/gcd(num1,num2);
    return 0;
}