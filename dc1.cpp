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
  	  lli i,j,n,c1=0,c2=0;
  	  cin>>n;
  	  lli a[n];
  	  for(i=0;i<n;i++)
  	  	{
  	  		cin>>a[i];
  	  		if(a[i]==0)
  	  			c1++;
  	  		if(a[i]==2)
  	  			c2++;
  	  	}
  	  /*for(i=0;i<n;i++)
  	  {
  	  	for(j=i+1;j<n;j++)
    	{
  	  	  if( a[i]*a[j] == a[i]+a[j] )
  	  		{
  	  			cnt++;
  	  		}
  	  	}
  	  }*/
  	  	c1=(c1*(c1-1))/2 + (c2*(c2-1))/2;
  	  cout<<c1<<'\n';
  }
return 0;
}

