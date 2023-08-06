#include<iostream>
using namespace std;
int main()
{
    int length,i,j;
    cout<<"Enter the length:"<<endl;
    cin>>length;
    for( i=0;i<length;i++)
    {
        for( j=0;j<(i*i)+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

return 0;
}