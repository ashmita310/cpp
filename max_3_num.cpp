#include<iostream>
using namespace std;
int main()
{
    float a=0.0,b=0.0,c=0.0;
    cout<<"Enter the three numbers:"<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c)
        cout<<"A is largest"<<endl;
    else if(b>a && b>c)
        cout<<"B is largest"<<endl;
    else
        cout<<"C is largest"<<endl;
    
    return 0;
}