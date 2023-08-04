#include<iostream>
using namespace std;
int main()
{
    int n=0,i;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"The multiplication table is:"<<endl;
    for(i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}