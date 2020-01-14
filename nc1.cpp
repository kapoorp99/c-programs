#include <bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
typedef long long int lli;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  lli tc;
  cin>>tc;
  while(tc--)
  { 
  	  lli i,j,n;
  	  int c=0;
  	  cin>>n;
  	  string s[n];
  	  lli arr[n][10];
  	  for(i=0;i<n;i++)
  	  {
  	  	cin>>s[i];
  	  }
  	  for( i=0 ; i < n-1 ; i++ )
  	  {
  	  	for(j=0;j<10;j++)
  	  	{
  	  	     arr[i+1][j]=(int)s[i][j]-48 ^ (int)s[i+1][j]-48 ;
  	  	}
  	  }
  	  for(j=0;j<10;j++)
  	  {
  	  	if(arr[n-1][j]==1)
  	  		c++;
  	  }
  	  cout<<c<<'\n';
  }
return 0;
}

