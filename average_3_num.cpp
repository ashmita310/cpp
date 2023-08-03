#include<iostream>
using namespace std;
int main()
{
    float a=0.0,b=0.0,c=0.0,sum=0.0,average=0.0;
    cout<<"Enter the three numbers:"<<endl;
    cin>>a>>b>>c;
    sum=a+b+c;
    average=(sum)/3.0;
    cout<<"Average of three numbers:"<<average<<endl;

    return 0;
}