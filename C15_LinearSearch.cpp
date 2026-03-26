#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
   
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int target = 8;
    // for (int i = 0; i < 7; i++)
    // {
    //     if(arr[i]==target)
    //     {
    //         cout<<arr[i]<<"is found at index of : "<<i<<endl;
    //     }
    // }
 linearSearch(arr, 7, 8);
    return 0;
}