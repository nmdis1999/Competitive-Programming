/**
https://www.geeksforgeeks.org/number-of-subsequences-with-even-and-odd-sum-set-2/
N = Total number of element in the array.
Even = Total number of evens in the array.
Odd = Total number of odd in the array.
Tseq = Total number of subsequences.
Oseq = Total number of subsequences with only odd number.
Eseq = Total number of subsequences with even number.
OddSumSeq = Total number of subsequences with odd sum.
EvenSumSeq = Total number of subsequences with even sum.

OddSumSeq = 2^Even * 2^Odd – 1
EvenSumSeq = 2^N – 1 – OddSumSeq
**/
#include <bits/stdc++.h>
using namespace std;
pair<int, int> countSum(int arr[], int n)
{
    int NumberOfOdds = 0, NumberOfEvens = 0;

    // Counting number of odds
    for (int i = 0; i < n; i++)
        if (arr[i] & 1)
            NumberOfOdds++;

    // Even count
    NumberOfEvens = n - NumberOfOdds;

    int NumberOfOddSubsequences = (1 << NumberOfEvens)
                                  * (1 << (NumberOfOdds - 1));

    // Total Subsequences is (2^n - 1)
    // For NumberOfEvenSubsequences subtract
    // NumberOfOddSubsequences from total
    int NumberOfEvenSubsequences = (1 << n) - 1
                                   - NumberOfOddSubsequences;

    return { NumberOfEvenSubsequences,
             NumberOfOddSubsequences };
}

int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    return 0;
}
