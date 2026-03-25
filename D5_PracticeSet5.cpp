// 10. Find and print the product of all digits of a given number. 
// 11. Count and print the total number of digits in a given number. 
// 12. Reverse the given number and print the reversed value. 
// 13. Check whether the given number is a palindrome. 
// 14. Find and print the sum of digits of the given number. 
// 15. Check whether the given number is an Armstrong number.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int original=n;
   int rev=0;
    while (n > 0)
    {
        int new_n = n % 10;
         rev = rev*10+new_n;
        n = n / 10;
    }
    if (original == rev)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
}
