#include<iostream>
using namespace std;
int main()
{
 //1. Write a program to print your name, age, and course.
 string name;
 int age;
 string course;
 cout<<"enter your name,age and course"<<endl;
 cin>>name>>age>>course;
 cout<<" your name is : "<<name<<"your age is :"<<age << "and your course is :"<< course<<endl;
//2.take two numbers and print: Addition  Subtraction Multiplication Division
int num1,num2;
cin>>num1>>num2;
cout<<num1+num2<<endl;
cout<<num1-num2<<endl;
cout<<num1*num2<<endl;
cout<<num1/num2<<endl;
//3. Convert integer to float and print both values.
int num=5;
float number=num;
cout<<number<<endl;
// cout<<num<<endl;

//5. Swap two numbers using a third variable.
int a=2,b=3,temp;
temp=a;
a=b;
b=temp;
cout<<a<<"and"<<b<<endl;
//6. Swap two numbers without using third variable.
a=a+b;
b=a-b;
a=a-b;
cout<<a<<"and"<<b<<endl;
}