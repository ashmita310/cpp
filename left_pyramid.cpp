#include<iostream>
using namespace std;
int main()
{
    int len, i, j;
    cout<<"Enter a length: ";
    cin>> len;
    for(i=0; i<len;i++)
    {
        for (j=0; j<len-i-1;j++)
        {
            cout<<" ";
        }
        for (j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<< endl;
    }
    return 0;
}