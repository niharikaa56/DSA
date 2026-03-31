#include <bits/stdc++.h>
using namespace std;
vector<int> pairSum(vector<int> nums, int target)
{
    int n = nums.size();
    vector<int> ans;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; i < n; j++)
    //     {
    //         if(nums[i]+nums[j]==target){
    //        ans.push_back(i);
    //        ans.push_back(j);
    //        return ans;
    //         }
    //     }
    // }
    // }

    int right = n - 1;
    int left = 0;
    while (left < right)
    {
        int pairsum = nums[left] + nums[right];
        if (pairsum < target)
        {
            left++;
        }
        else if (pairsum > target)
        {
            right--;
        }
        else
        {
            ans.push_back(left);
            ans.push_back(right);
            return ans;
        }
    }
    return ans; 
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;
    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << "," << ans[1] << endl;
}