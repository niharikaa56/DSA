#include <bits/stdc++.h>
using namespace std;
// Reverse a Number
int reverse(int n)
{
    int rev = 0;
    for (int i = 0; i < n; i++)
    {
        int new_n = n % 10;
        rev = rev * 10 + new_n;
        n = n / 10;
    }
    return rev;
}
// Palindrome Number
void Palindrome(int n)
{
    int original = n;
    int rev = 0;
    while (n > 0)
    {
        int new_n = n % 10;
        rev = rev * 10 + new_n;
        n = n / 10;
    }
    if (original == rev)
    {
        cout << "Palindrome number";
    }
    else
    {
        cout << "Not Palindrome number";
    }
}

void count_digit(int num)
{
    int count=0;
    while(num>0)
    {
        count++;
        num=num/10;
    }
    cout << count;
}
// Power Function
int power(int n,int p)
{
    C8_
}
int main()
{
    Palindrome(121);
    cout<<endl;
    cout << reverse(541) << endl;
    count_digit(12223);
    return 0;
}