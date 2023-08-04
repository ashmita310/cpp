#include<iostream>
#include<string>
using namespace std;
int main()
{
    string input;
    cout<<"Enter the string:"<<endl;
    getline(cin,input);
    bool ispalindrome=true;
    int i;
    int length=input.length();
    for(i=0;i<length/2;i++)
    {
        if(input[i]!=input[length-i-1])
        {
          ispalindrome=false;
          break;
        }
    }
    if(ispalindrome)
    cout<<"Palindrome"<<endl;
    else
    cout<<"Not palindrome"<<endl;
    return 0;
}