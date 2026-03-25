#include <iostream>
using namespace std;
int main()
{
    cout << "HELLO WORLD !" << endl;
    cout << "Niharika" << endl  << "Goswami";

    // Data types and variables
    // int age=20;
    char ch = 'A';
    float num = 100.99;
    bool isnum = true;
    double PI = 3.14f;
    cout << num << endl;

    // TYPECASTING Implicit
    char grade = 'a';
    int value = grade;
    cout << value << endl;
    // TYPECASTING Explicit
    double price = 100.99;
    int newprice = price;
    cout << newprice << endl;

    // INPUT
    int age;
    cout << "enter your age " << endl;
    cin >> age;
    cout << "your age is " << age << endl;

    return 0;
}