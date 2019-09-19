#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int main()
{
    cin >> n;
    cin >> s;
    if (n == 4) cout << 0 << endl;
    else if (n == 3) cout << 1 << endl;
    else
    {
        map<char, int> m;
        for (auto ch : s) {
            m[ch]++;
        }
        int len1 = m['n'];
        int len0 = m['r'];
        ///cout << m['n'] << m['e'] <<endl;
        for (int i = 0; i < len1; i++)
            cout << 1 <<" ";
        for (int i = 0; i < len0; i++)
        cout << 0 <<" ";
        cout << endl;
    }
    return 0;
}
