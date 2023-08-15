#include<bits/stdc++.h>
using namespace std;
int main()
{
    string car = "BMW";
    string* carptr = &car;
    cout<<car<<endl;//printing the value of car variable
    cout<<&car<<endl;//printing the address of car variable
    cout<<carptr<<endl;//printing the address of car variable which is the value of the string pointer variable
    cout<<*carptr<<endl;//printing the value of car variable which is here pointing to the string pointer variable
    cout<<*(&car)<<endl;//printing the value of car variable ehich is basically nothing but pointing to the address of the car variable i.e the the value of the car variable itself
    cout<<&carptr<<endl;//printing the address of string carptr 
return 0;
}