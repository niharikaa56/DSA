#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for subarray
    int n = 5;
    int maxsum = INT_MIN;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int st = 0; st < n; st++)
    {
        int currsum = 0;
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                currsum += arr[end];
                maxsum = max(currsum, maxsum);
            }
            cout << " ";
        }
    }
    cout << maxsum << "  max subbarray sum" << endl;
}