#include<bits/stdc++.h>
#include<string>
using namespace std;
int cs(string s);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		string s,ts;
		int q,l,r,x,y,m,ans=0,n,res,rest=0;
		cin>>s;
		cin>>q>>l>>r>>x>>y>>m;
		n=s.length();
		while(q--)
		{
           l=1+(l+ans)%n; 
           r=1+(r+ans)%n;
           if(l>r)
            swap(l,r);
           x=1+(x+ans)%m;
           y=1+(y+ans)%n;
           if(x>y) 
           	swap(x,y);
           for(int i=l;i<=r;i++)
           {
           	for(int j=x;j<=y;j++)
           	{
           		ts=s.substr(i,j);
           		res=cs(ts);
           		if(res==1)
           		   ans++;
           	}
           }
           rest=rest+ans;
		}
		cout<<rest<<'\n';
	}
	return 0;
}
int cs(string s)
{
	int i,j,len,flag=1;
	for(len=0;s[len]!='\0';++len);
    
    for(i=0,j=len-1;i<len/2;++i,--j)
    {
        if(s[j]!=s[i])
            flag=0;
    }
    
    if(flag==1)
        return 1;
    else
        return 0;
}