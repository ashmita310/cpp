#include<iostream>
using namespace std;
int main()
{
    int length;
    cout<<"Enter the length:"<<endl;
    cin>>length;
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<"0*";
        }
        cout<<endl;
    }
}