#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;   // ✅ correct place
}

void fibonacci(int n)
{
    int a=0;
    int b=1;
    for (int i = 0; i < n; i++)
    {
         cout << a << " ";
        int c=a+b;
        a=b;
        b=c;
    }
   
}

int main()
{
    fibonacci(5);

    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (prime(i))   // ✅ no semicolon
        {
            cout << i << " ";
        }
    }

    return 0;
}