#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,los,loss,p;
	string s,ss;
	cout<<"enter a string:"<<'\n';
	cin>>s;
	cout<<"enter a subsequence string"<<'\n';
	cin>>ss;
	los=s.length();
	loss=ss.length();
	int a[los+1][loss+1];
	for(i=0;i<=los;i++)
	{
		for(j=0;j<=loss;j++)
		{
			if( i==0 || j==0 )
				a[i][j]=0;
			else if(s[i-1]==ss[j-1])
				a[i][j]=1 + a[i-1][j-1];
			else
				a[i][j]=max(a[i-1][j],a[i][j-1]);
		}
	}
	for(i=0;i<=los;i++)
	{
		for(j=0;j<=loss;j++)
		{
			cout<<a[i][j]<<"   ";
		}
		cout<<'\n';
	}

	cout<<"lcs is ";
	p=a[los][loss];
	char rss[p+1];
	rss[p]='\0';
    i=los;
    j=loss;
    while(i>0 && j>0)
    {
    	if(s[i-1]==ss[j-1])
    	{
    		rss[p-1]=s[i-1];
    		p--;
    		i--;
    		j--;

    	}
    	else if(a[i-1][j]>a[i][j-1])
    		i--;
    	else
    		j--;
    }
    cout<<" "<<rss<<'\n';

	return 0;
}