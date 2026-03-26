#include<bits/stdc++.h>
using namespace std;
void changeArray(int arr[],int size)
{
    cout<<"in function\n";

    for (int i = 0; i < size; i++)
    {
       arr[i]=2*arr[i];
    }
        
}
int main()
{
    //Pass by reference means you pass the actual variable (not a copy) to a function.
    int arr[]={1,2,3};
    changeArray(arr,3);
    cout<<"int main\n";
    for (int i = 0; i < 3; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}