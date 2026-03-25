#include<bits/stdc++.h>
using namespace std;
int dectobinary(int decnum)
{
    // DECIMAL TO BINARY
    int ans=0;
    int pow=1;
    while(decnum>0)
    {
        int rem=decnum%2;
        decnum=decnum/2;
        ans+=(rem*pow);
        pow=pow*10;

       
    } 
     return ans;
}
// BINARY TO DECIMAL
int binarytodec(int binary)
{
    int ans=0;
    int pow=1;
    while(binary>0)
    {
        int rem=binary%10;
        ans+=rem*pow;
        binary=binary/10;
        pow=pow*2;
    }
    return ans;
}
int main()
{
//    int decnum=50;
//    cout<<dectobinary(decnum)<<endl;
//    return 0;

   int binary=101;
   cout<<binarytodec(binary)<<endl;
   return 0;
   
}