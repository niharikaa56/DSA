#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int minindex=0;
    int maxindex=0;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]<arr[minindex])
       {
        minindex=i;
       }

       if(arr[i]>arr[maxindex])
       {
        maxindex=i;
       }
    }
    cout<<"Smallest Element is :"<<minindex<<endl;
    cout<<"Largest Element is :"<<maxindex<<endl;
    
}