// FIND ALL UNIQUE ELEMENT
#include <bits/stdc++.h>
using namespace std;
void unique(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }

        }
        if(count==1)
        {
            cout<<arr[i]<<endl;
        }
    }
}

void intersection(int arr[],int brr[],int n,int m)
{
    for (int i = 0; i < n; i++)
    {
        
        for (int j= 0; j < m; j++)
    {
       if(arr[i]==brr[j])
       {
        cout<<arr[i]<<" ";
        break;
       }
    }
    
    }
    
}
int main()
{
    int arr[] = {1, 4, 5, 1, 2};
    int brr[]={3,5,4,6};
    // unique(arr, 5);
    intersection(arr,brr,5,4);
}