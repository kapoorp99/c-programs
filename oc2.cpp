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
  	  lli i,j,n,m,q,cnt;
  	  cin>>n>>m>>q;
      cnt=0;
  	  lli a[n+3][m+3],x[q+1],y[q+1];
       for(i=1;i<=n;i++)
      {
        for(j=1;j<=m;j++)
        {
          a[i][j]=0;
        }
      }
  	  for(i=0;i<q;i++)
  	  {	
        cin>>x[i]>>y[i];
      }
  	  for(i=0;i<q;i++)
  	  {
        for(j=1;j<=m;j++)
          {
            a[x[i]][j]++;
          }
        for(j=1;j<=n;j++)
          {
            a[j][y[i]]++;
          }
  	  }
      for(i=1;i<=n;i++)
      {
        for(j=1;j<=m;j++)
        {
          if( a[i][j] %2 != 0 )
            cnt++;
        }
      }
      cout<<cnt<<'\n';

  }
return 0;
}

