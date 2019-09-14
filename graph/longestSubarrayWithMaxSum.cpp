// subarray having maximum sum
#include <bits/stdc++.h>
using namespace std;

// function to find the maximum sum that
// exists in a subarray
int maxSubArraySum(int arr[], int size)
{
    int max_so_far = arr[0];
    int curr_max = arr[0];

    for (int i = 1; i < size; i++) {
        curr_max = max(arr[i], curr_max + arr[i]);
        max_so_far = max(max_so_far, curr_max);
    }
    return max_so_far;
}

// function to find the length of longest
// subarray having sum k
int lenOfLongSubarrWithGivenSum(int arr[], int n, int k)
{
    // unordered_map 'um' implemented
    // as hash table
    unordered_map<int, int> um;
    int sum = 0, maxLen = 0;

    // traverse the given array
    for (int i = 0; i < n; i++) {

        // accumulate sum
        sum += arr[i];

        // when subarray starts from index '0'
        if (sum == k)
            maxLen = i + 1;

        // make an entry for 'sum' if it is
        // not present in 'um'
        if (um.find(sum) == um.end())
            um[sum] = i;

        // check if 'sum-k' is present in 'um'
        // or not
        if (um.find(sum - k) != um.end()) {

            // update maxLength
            if (maxLen < (i - um[sum - k]))
                maxLen = i - um[sum - k];
        }
    }

    // required maximum length
    return maxLen;
}

// function to find the length of the longest
// subarray having maximum sum
int lenLongSubarrWithMaxSum(int arr[], int n)
{
    int maxSum = maxSubArraySum(arr, n);
    return lenOfLongSubarrWithGivenSum(arr, n, maxSum);
}

// Driver program to test above
int main()
{
    int arr[] = { 5, -2, -1, 3, -4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of longest subarray having maximum sum = "
         << lenLongSubarrWithMaxSum(arr, n);
    return 0;
}
