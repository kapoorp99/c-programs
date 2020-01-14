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
  	  lli i,j,n,c=0;
  	  cin>>n;
  	  lli a[n];
  	  for(i=0;i<n;i++)
  	  	cin>>a[i];
  	  lli b[n];
  	  for(i=0;i<n;i++)
  	  {
  	  	c=0;
  	  	for(j=i+1;j<n;j++)
  	  	{
  	  		if(a[i]<a[j])
  	  		{
  	  			c++;
  	  		}
  	  		else
  	  		{
  	  			break;
  	  		}
  	  	}
  	  	b[i]=c;
  	  }
  	  for(i=0;i<n;i++)
  	  	cout<<b[i]<<" ";
  	  cout<<'\n';
  }
return 0;
}

