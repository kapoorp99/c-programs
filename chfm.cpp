#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	lli t;
	cin>>t;
	while(t--)
	{
		lli n;
		cin>>n;
		lli a[n];
		lli i;
		double s=0;
		for(i=0;i<n;i++)
			{
				cin>>a[i];
				s+=a[i];
			}
		double m;
			m=s/n;
			for(i=0;i<n;i++)
			{
				if(m==a[i])
				{
					cout<<i+1<<'\n';
					break;
				}	
			}
			if(i==n)
			{
				cout<<"Impossible\n";
			}
	}
	return 0;
}