#include <iostream>
using namespace std;

int main()
{
     int num,temp, remainder, rev = 0;

     cout << "Enter a number: "<<endl;
     cin >> num;

     num=temp;

     while (num != 0)
     {
         remainder = num % 10;
         rev = (rev * 10) + remainder;
         num = num / 10;
     }

     if (temp == rev)
         cout << " The number is a palindrome.";
     else
        cout << " The number is not a palindrome.";

    return 0;
}