#include<bits/stdc++.h>
using namespace std;
int main()
{
    // First way to create arrays
    // int marks[100];
    // Second way
// int marks[5]={99,100,88,98,95};
// // Acess Data
// marks[0]=101;
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;
// cout<<marks[4]<<endl;
// Array index start from 0 to n-1 .Always excess array within the limit

// How to take input of arrys
// How to run loop in arrays

int marks[5];
cout<<"Enter Elements in the Arrays"<<endl;
for (int i = 0; i<5; i++)
{
    cin>>marks[i];
}
cout<<sizeof(marks)/sizeof(int)<<endl;
cout<<"Printing Arrays using for loop"<<endl;
for (int i = 0; i<5; i++)
{
    cout<<marks[i]<<endl;
}

return  0;
}