#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int sz)
{
    int sum = 0;
    for (int i = 0; i < sz; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int multi(int arr[], int sz)
{
    int fact = 1;
    for (int i = 0; i < sz; i++)
    {
        fact *= arr[i];
    }
    return fact;
}

void swap(int arr[],int sz)
{
    int mini=INT_MAX;
    int maxi=INT_MIN;

    for (int i = 0; i < sz; i++)
    {
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }
   swap(mini,maxi);
   cout<<mini<<"  " <<maxi<<" ";
    
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sz = 5;
    cout << sum(arr, sz) << endl;
    cout << multi(arr, sz) << endl;
    swap(arr, sz) ;

    return 0;
}