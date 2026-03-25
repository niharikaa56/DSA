#include<bits/stdc++.h>
using namespace std;
int main()
{
    // bool isprime=true;
    // int n;
    // cin>>n;
    // for (int i = 1; i *i <=n; i++)
    // {
    //     if(n%i==0)
    //     {
    //         isprime=false;
    //         break;
    //     }
    //     // else{
    //     //     isprime=true;
    //     // }
    // }
    // if(isprime==true){
    //     cout<<"Prime";
    // }
    // else{
    //     cout<<"not prime";
    // }
    
    // int n;
    // cin>>n;
    // int sum=0;
    // for (int i = 0; i <=n; i++)
    // {
    //    if(i%3==0)
    //    {
    //     sum+=i;
    //    }
    // }
    // cout<<sum;


    int fact=1;
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    cout<<fact;
}