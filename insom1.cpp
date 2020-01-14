#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	lli n,i,s=0;
	cin>>n;
	lli a[n],b[n-1];
	 for(i=0;i<n;i++)
		cin>>a[i];
	 for(i=0;i<n-1;i++)
	    cin>>b[i];
	if(n==1)
	{
		cout<<4*a[0]<<"\n";
	}
	else
	{
		for(i=0;i<n;i++)
		{
			s=s+5*a[i];
		}
		s=s-a[i-1];
		for(i=0;i<n-1;i++)
		{
			s=s+b[i];
		}
		
		cout<<s<<"\n";
	}
}