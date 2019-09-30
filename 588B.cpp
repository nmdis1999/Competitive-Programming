#include <bits/stdc++.h>
#define ll long long
#define MAXN 2000001
using namespace std;
int main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.precision(17);
    int n, k;
    string s;
    cin >> n >> k >> s;
    if(k == 0)
    	cout << s << endl;
    else {
    	if(s.length() == 1) {
    		cout << 0 << endl;
    		return 0;
    	}
    	if(s[0] != '1') {
    		s[0] = '1';
    		k--;
    	}
    	for(int i = 1;(i < n) && (k > 0);i++) {
    		if(s[i] != '0') {
    			s[i] = '0';
    			k--;
    		}
    	}
    	cout << s << endl;
    }
    return 0;
}
