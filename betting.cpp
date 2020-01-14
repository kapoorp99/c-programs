#include<bits/stdc++.h>
using namespace std;
long long int fib(long long int m);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,q,i;
		cin>>n;
		long long int a[n],b[n],res[n];
		pair<int,int> pr[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		}
		for(i=0;i<n;i++)
		{
          res[i]=fib(a[i])%b[i];
          pr[i].first=res[i];
          pr[i].second=i;
		}
		sort(pr,pr+n);
		if(pr[n-1].first==0)
		{
			cout<<"-1"<<'\n';
		}
		else
		{
			if(pr[n-1].first==pr[n-2].first)
				cout<<min(pr[n-1].second,pr[n-2].second)<<'\n';
			else
				cout<<pr[n-1].second<<" "<<pr[n-1].first<<'\n';
		}

	}
	return 0;
}
 long long int fib(long long int m)
{ 
  long long int f[m+2];  
  long long int i; 
  f[0] = 0; 
  f[1] = 1; 
  for (i=2;i<=m;i++) 
  { 
    f[i]=f[i-1]+f[i-2]; 
  }
  return f[m]; 
} 