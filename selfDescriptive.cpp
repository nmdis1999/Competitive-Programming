#include <bits/stdc++.h>
#define ll long long
using namespace std;
boolean isSelfDescriptive(int input) {
    if (input <= 0)
			return false;
    int digitCount[10];
    int tempInput = input;

    /// Digits count in number
    while (tempInput != 0) {
        int mod = tempInput % 10;
        digitsCount[mod]++;
        tempInput /= 10;
    }

    tempInput = input;
    int divisible = 1;
    /// Find highest divisible number
    while (tempInput >= 10) {
        tempInput /= 10;
        divisible *= 10;
    }
    tempInput = input;
    int index = 0;
    /// Verify digits count is matches with index
    while (tempInput != 0) {
        int indexValue = tempInput / divisible;
        if (digitsCount[index] != indexValue)
            return false;
        tempInput %= divisible;
        divisible /= 10;
        index++;
    }
    return true;
}

int main()
{

    return 0;
}
