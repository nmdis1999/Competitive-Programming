/**
Here's an O(n) algorithm for what I now understand the problem to be asking, which is essentially:

"How many numbers are larger than all elements to their left and smaller than all elements to their right?"
                                                                                    -mhelvens (Leetcode)

Time Complexity - O(n)
Space Complexity - O(n)
**/

#include <bits/stdc++.h>
using namespace std;

int binarySearchable(vector<int>& nums)
{
    int n = nums.size();
    int cnt = 0;
    int maxLeft[n+1];
    maxLeft[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        maxLeft[i] = max(maxLeft[i - 1], nums[i])
    }

    int minRight = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        minRight = min(minRight, nums[i]);
        if (nums[i] <= minRight&& nums[i] >= maxLeft[i])
            cnt++;
    }

    return cnt;
}
int main()
{

    return 0;
}
