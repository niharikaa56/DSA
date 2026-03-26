#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter size of arrays";
    cin >> n;
    int arr[n];
    cout << "enter elements in the arrys";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int min = arr[0];
    // int max = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] < arr[0])
    //     {
    //         min = arr[i];
    //     }
    //     if (arr[i] > arr[0])
    //     {
    //         max = arr[i];
    //     }
    // }
    // cout << "Smallest element in the array is " << min << endl;
    // cout << "Largest element in the array is " << max << endl;

    // // Using INT_MAX,INT_MIN
    int mini=INT_MAX;
    int maxi=INT_MIN;
    // MIN AND MAX FUNCITON
for (int i = 0; i < n; i++)
{
    mini=min(mini,arr[i]);
    maxi=max(maxi,arr[i]);
}

     cout << "Smallest element in the array is " << mini << endl;
    cout << "Largest element in the array is " << maxi << endl;

    return 0;
}