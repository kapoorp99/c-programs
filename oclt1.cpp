#include <bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
typedef long long int lli;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  lli tc;
  cin>>tc;
  while(tc--)
  { 
  	  lli i,j,n,k,cnt=0;
  	  cin>>n>>k;
  	  lli a[n];
  	  for(i=0;i<n;i++)
  	  	cin>>a[i];
  	  for(i=0;i<n*k;i++)
  	  {
  	  	for(j=0;j<n*k;j++)
  	  	{
  	  		if(a[i%n]>a[j%n] && i<j )
  	  		{
  	  			cnt++;
  	  		}
  	  	}
  	  }
  	  cout<<cnt<<'\n';
  }
return 0;
}

