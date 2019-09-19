#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int main()
{
    string s;
	cin >> s;
	char ch = 'z';
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] > ch)
			cout << "Ann" << endl;
		else
			cout << "Mike" << endl;
		ch = min(ch, s[i]);
	}
    return 0;
}

