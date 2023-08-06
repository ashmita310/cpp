#include<iostream>
using namespace std;
int main()
{
    int num=0,fact=1;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"The factorial is:"<<fact;
return 0;
}