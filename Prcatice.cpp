#include <bits/stdc++.h>
using namespace std;

int twosum(int nums[], int n)
{
    int target = 9;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(nums[i]+nums[j]==target)
            {
                return {i,j};
            }
        }
    }
    
}

int main()
{
    int nums[4] = {2, 7, 11, 15};
}