#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		long long int i,n,k,s=0;
		cin>>n>>k;
		for(i=1;i<=n;i++)
		{
			if(i%2 != 0)
			{
				s = s%m + pow(i,k);
				s%=m;
			}
			else
			{
				s = s%m + pow(i,k) - i;
				s%=m;
			}
		}
		s%=m;
		cout<<s+n<<'\n';
	}
}