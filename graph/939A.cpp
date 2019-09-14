#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag=0;
	cin>>n;

	int i,a[n];

	for(i=1; i<=n; i++)
		cin>>a[i];

	for(i=1; i<n; i++)
	{
		if(a[a[a[i]]] == i)
		{
			cout<<"YES"<<endl;
			flag=1;
			break;
		}
	}

	if(flag==0)
		cout<<"NO"<<endl;
}
