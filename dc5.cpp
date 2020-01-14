//easy subsequence
#include <bits/stdc++.h> 
using namespace std; 
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define M 1000000007 
#define tc  lli t;cin >> t;while(t--)
typedef long long int lli;
lli f(string s,lli n);
int main() 
{ 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  tc
  { 
  	  lli n,res;
  	  string str;
  	  cin>>n>>str;
  	  res=f(str,n);
  	  cout<<res<<'\n';
  }
return 0;
} 
lli f(string s,lli n)
{
	int maln,i,j;
	maln=n;
	for(i=0;i<n;i++)
	{
		for(j=max(i-maln,0);j<i;j++)
		{
			if(s[i]==s[j] && (maln > i-j))
			{
				maln=i-j;
			}
		}
	}
	return (n-maln);
} 


