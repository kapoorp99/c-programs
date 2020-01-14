#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		char s[n][10];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		int m,z=0;
		for(int i=0;i<10;i++)
		{
			m=0;
			for(int j=0;j<(n-1);j++)
			{
				if(s[j][i]=='1')
					m++;	
			}
			if(m & 1)
				z++;
		}
		cout<<z<<'\n';
	}	
}
