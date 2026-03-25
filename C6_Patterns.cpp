#include <bits/stdc++.h>
using namespace std;
int main()
{
    //  int n=4;
    //  for (int i = 1; i <=n; i++)
    //  {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;

    //  }
    // int n = 4;
    // // char ch = 'A';
    // for (int i = 1; i <= n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << ch << " ";
    //         ch+=1;
    //     }
    //     cout << endl;
    // }
//  int num=1;
//     int n=3;
//     for (int i = 1; i <= n; i++)
//     {
//        for (int j = 1; j <= n; j++)
//        {
//         cout<<num++<<" ";
        
//        }
//        cout<<endl;
//     }

// int n=4;
// for (int i = 0; i <n; i++)
// {
    
//     for (int j = 0; j<=i; j++)
//     {
//       cout<<" ";
//     }
//    for (int k = 0; k<=n-i; k++)
//     {
//       cout<<(i+1);
//     }
   
//    cout<<endl; 
// }
int n=4;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n-i-1; j++)
    {
        cout<<" ";
    }
    for (int j = 1; j <= i+1; j++)
    {
        cout<<j;
    }
    for (int j = i; j >=1; j--)
    {
        cout<<j;
    }
    cout<<endl;
}

    
}