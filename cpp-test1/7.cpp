#include<iostream>
using namespace std;
int main()
{
    int num1, num2, sum =0;
    cout << " Enter a number: ";
    cin>> num1;
    while (num1!=0)
    {
        num2 = num1%10;
        num1 = num1/10;
        sum = sum + num2;
        

    }
    cout<< "The sum of digits are :"<< sum;
    return 0;
}