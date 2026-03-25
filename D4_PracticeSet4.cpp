//  FOR Loop
// 1.	Print numbers from 1 to 10.
// 2.	Print even numbers from 1 to 50.
// 3.	Find sum of first N natural numbers.
// 4.	Print multiplication table of a number.
// 5.	Factorial of a number.
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    for (int i = 1; i <=10; i++)
    {
       cout<<i<<endl;
    }

    for (int i = 1; i <=50; i++)
    {
        if(i%2==0){
       cout<<i<<endl;
        }
    }
    int sum=0;
    int n;
    cout<<"enter number";
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
       sum+=i;
    }
    cout<<"sum of  n number is "<<sum<<endl;

    for (int i = 1; i <=10; i++)
    {
        cout<<n<<"X"<<i<<"="<<n*i<<endl;
    }
    int fact=1;
    for (int i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
    
}
