#include<bits/stdc++.h>
using namespace std;
int copyarray(int arr[],int size,int arr2[])
{
    int j = 0;
    for(int i=size-1;i>=0;i--)
    {
        arr2[j]=arr[i];
        j++;
    }
}
int main()
{
    int arr[]={7,8,9,5,4};
    const int size=sizeof(arr)/sizeof(arr[0]);
    int arr2[size]={};
    copyarray(arr,size,arr2);
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i]<<endl;
    }
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr2[i]<<endl;
    }
    return 0;
}