#include<iostream>
using namespace std;
int main(){
    int length,i=0,j=0,count=1;
    cout<<"Enter the length:"<<endl;
    cin>>length;
    for(i=1;i<=length;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout << count << " ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}