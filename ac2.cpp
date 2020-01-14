#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FIO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
	FIO;
	int t,c,x;
	cin>>t;
	while(t--)
	{
		cin>>c>>x;
		int r=0;
		if(x==1)
		{
		 cout<<c<<"\n";
		 continue;
		}
			while(c>=x)
			{
		      r+=c%x;
		      c=c/x;
		    }
		    r+=c;
		    cout<<r<<"\n";
	}
	return 0;
}
