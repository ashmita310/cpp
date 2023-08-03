#include<iostream>
using namespace std;
int main()
{
    int num = 0;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    if(num>0)
        cout<<"The number is positive"<<endl;
    else if(num<0)
        cout<<"The number is negative"<<endl;
    else
        cout<<"Its a zero"<<endl;
      
    return 0;
}