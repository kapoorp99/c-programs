#include <bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define M 1000000007 
#define tc  lli t;cin >> t;while(t--)
typedef long long int lli;
int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  tc
  { 
  	  lli i,n,sum=0,pn,s;
  	  cin>>n;
  	  lli a[8];
  	  memset(a,0,sizeof(a));
  	  for(i=0;i<n;i++)
  	  {
  	  	cin>>pn>>s;
  	  	pn-=1;
  	  	if(pn<8)
  	  	{
  	  		if(a[pn]<s)
  	  		{
  	  			a[pn]=s;
  	  		}
  	  	}
  	  }
  	  for(i=0;i<8;i++)
  	  {
  	  	sum+=a[i];
  	  }
  	  cout<<sum<<'\n';
  }
return 0;
}

