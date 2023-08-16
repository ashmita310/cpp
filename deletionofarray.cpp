#include<bits/stdc++.h>
using namespace std;
int deletefromarray(int arr[],int &currentsize,int position)
{
    if(position>currentsize)
    cout<<"Invalid Input"<<endl;
    for(int i = position;i<currentsize-1;i++)
    {
        arr[i]=arr[i+1];
        currentsize--;
    }
}
int main()
{
    int arr[]={7,8,5,9,4};
    int currentsize=sizeof(arr)/sizeof(arr[0]);
    int position;
    cout<<"Enter the position to delete:";
    cin>>position;
    deletefromarray(arr,currentsize,position);
    for(int i=0;i<currentsize;i++)
    cout<<" "<<arr[i];
    return 0;
}