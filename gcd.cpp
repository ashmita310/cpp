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
    int num1=0, num2=0;
    cout<<"Enter the two numbers:"<<endl;
    cin>> num1>> num2;
    cout << "gcd of "<< num1 << " "<< num2 <<" is "<<gcd (num1, num2);
    return 0;
}
