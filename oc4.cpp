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
  	  lli i,j,n;
  	  cin>>n;
  	  lli a[n],b[n],c=0;
  	  for(i=0;i<n;i++)
  	  	cin>>a[i];
  	  b[0]=0;
  	  for(i=1;i<n;i++)
  	  {
  	  	c=0;
  	  	for(j=0;j<i;j++)
  	  	{
  	  		if(a[j]%a[i]==0)
  	  		{
  	  			c++;
  	  		}
  	  	}
  	  	b[i]=c;
  	  }
  	  lli *ans;
  	  ans=std::max_element(b,b+n);
  	  cout<<*ans<<'\n';
  }
return 0;
}

