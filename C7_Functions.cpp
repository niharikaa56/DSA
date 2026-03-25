#include <bits/stdc++.h>
using namespace std;
void printhello()
{
    cout << "Hello" << endl;
}
int sum(int n1, int n2)
{
    return n1 + n2;
}
int min2(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int Sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int Fact(int number)
{
    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        fact *= i;
    }
    return fact;
}
int DigitSum(int digit)
{
    int digitsum = 0;
    while (digit > 0)
    {
        int lastDigit = digit % 10;
        digitsum += lastDigit;
        digit = digit / 10;
    }
    return digitsum;
}

int ncr(int n, int r)
{
   int fact_n= Fact(n);
   int fact_r= Fact(r);
   int fact_nr= Fact(n - r);
   return Fact(n) / Fact(r) * Fact(n - r);
}

int main()
{
    printhello();
    cout << "sum of 2 numbers is : " << sum(3, 4) << endl;
    ;
    cout << "min of 2 numbers is : " << min2(4, 5) << endl;
    cout << "sum of n numbers is : " << Sum(5) << endl;
    cout << "Factorial of n numbers is : " << Fact(5) << endl;
    cout << DigitSum(1453)<<endl;;
  int n=6,r=3;
  cout<<ncr(n,r)<<endl;
    return 0;
}