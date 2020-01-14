#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,p,s=0,c=0;
		cin>>n>>p;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
		{
			/* if(s<=p)
			 {
		   		s+=a[i];
				c++;
				if(s+a[i+1]>p)
					break;
			 }
			 */
			if(p>=a[i])
			{
				p=p-a[i];
				c++;
			}
		}
		cout<<c+1<<'\n';
		
	}
}