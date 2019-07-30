#include<bits/stdc++.h>
using namespace std;
int minimumReversal(int a[], int n)
{
    string start = "", destination = "";
    for (int i = 0; i < n; i++)
        start += to_string(a[i]);
    sort(a, a + n);
    for (int i = 0; i < n; i++)
        destination += to_string(a[i]);
    queue<pair<string, int>> q;
    pair<string, int> p;
    q.push(make_pair(start, 0));
    if (start == destination)
        return 0;
    while (!q.empty())
    {
        auto p = q.front();
        string t = p.first;
        q.pop();
        for (int j = 2; j <= n; j++)
        {
            string r = t;
            reverse(r.begin(), r.begin()+j);
            if (r == destination)
                return p.second + 1;
            q.push(make_pair(r, p.second + 1));
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << minimumReversal(arr, n)<<endl;
}
