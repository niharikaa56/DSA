#include <iostream>
using namespace std;
int main()
{
    // Arithmetic Operators
    int a = 5, b = 10;
    int sum = a + b;
    int diff = b - a;
    int multi = a * b;
    int div = b / a;
    int remain = b % a;
    cout << sum << endl;
    cout << diff << endl;
    cout << multi << endl;
    cout << div << endl;
    cout << remain << endl;

    cout << 5 / (double)2 << endl; // Typecasting
    // Relational Operators
    int c = 5, d = 4;
    cout << (3 > 5) << endl;
    cout << (3 < 5) << endl;
    cout << (3 >= 5) << endl;
    cout << (5 <= 5) << endl;
    cout << (5 == 5) << endl;
    cout << (5 != 5) << endl;

    // Logical Operators
    cout << (3 > 4 && 4 > 5) << endl;
    cout << (3 > 4 || 4 > 5) << endl;
    cout << (3 > 4 || 4 > 5) << endl;
    // Assignment Operators
    int f= 10, g = 5;
    f += 5;
    cout << f<< endl;
    g -= 3;
    cout << g<< endl;
    // Increment / Decrement (unary operator)
    int aa = 5;
    aa++; // a = 6
    // ++aa;
    cout<<aa<<endl;
    return 0;
}