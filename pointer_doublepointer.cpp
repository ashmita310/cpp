#include<bits/stdc++.h>
using namespace std;
int main()
{
    int first = 10;
    cout<<first<<endl;
    int* firstptr = &first;
    *firstptr = 20;
    cout<<first<<endl;
    int** secondptr = &firstptr;
    **secondptr = 30;
    cout<<first<<endl;
    return 0;
}