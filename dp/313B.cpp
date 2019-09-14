/**
Ilya and Queries
**/
#include <bits/stdc++.h>
using namespace std;
string str;
int a[100001];
int preProcess()
{
    cin >> str;
    int len = str.size();
    a[1] = 0;
    for (int i = 1; i < len; i++)
    {
        if (str[i - 1] == str[i])
            a[i + 1] = a[i] + 1;
        else
            a[i + 1] = a[i];
    }
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    preProcess();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l] << endl;
    }
    return 0;
}

