#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	lli t,a,b,n;
	cin>>t;
	while(t--)
	{
		cin >> a >> b >> n;
		n=n%3;
		if(n==0)
            cout<<a<<'\n';
		else if(n==1)
		   cout<<b<<'\n';
		else
		    cout<<(a^b)<<'\n';
	}
	return 0;
}