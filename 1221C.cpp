/**
From editorial:
Notice that if c≠m, then you can equalize them to the min and re-qualify the rest into students without specialization. That won't change the answer.

Now analyze the possible team formations: 1 of each kind, 2 coders and 1 mathematician or 1 coder and 2 mathematicians. Each of these squads have 1 coder and 1 mathematician, so you can only choose the type of the third member.

The students without specialization can only be used in the first kind of teams, so let's use them first. After that you might have been left with a nonzero count of coders and mathematicians. These are equal however, so ⌊c+m3⌋ can be added to the answer.

This solves each query in O(1).

You can also run a binary search and solve each query in O(logMAX).
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll q, c, m, x;
const int MAX = (int)1e9;
int main()
{
    cin >> q;
    while(q--)
    {
        cin >> c >> m >> x;
        cout <<  min(min(c, m), (c+m+x)/3)<< endl;
    }
    return 0;
}

