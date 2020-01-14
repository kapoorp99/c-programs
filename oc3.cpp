#include <bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
typedef long long int lli;
int main() 
{
  lli tc;
  cin>>tc;
  while(tc--)
  { 
  	  lli i,j,n,k,c;
  	  cin>>n>>k;
  	  lli arr[n],dp[3][n];
  	  for(i=0;i<n;i++)
  	  	cin>>arr[i];
  	  if(n%2==0)
  	  {
  	  for(i=0;i<3;i++)
  	  {
  	  	for(j=0;j<n;j++)
  	  	{
  	  		if(i==0)
  	  		{
  	  			if(j<n/2)
  	  			{
  	  				dp[i][j]=arr[j] ^ arr[n-1-j];
  	  			}
  	  			else
  	  			{
  	  				dp[i][j]=arr[j] ^ dp[0][n-1-j];
  	  			}
  	  		}
  	  	    else
  	  	    {
  	  	    	if(j<n/2)
  	  			{
  	  				dp[i][j]=dp[i-1][j] ^ dp[i-1][n-1-j];
  	  			}
  	  			else
  	  			{
  	  				dp[i][j]=dp[i-1][j] ^ dp[i][n-1-j];
  	  			}
  	  	    }
  	  	}
  	  }
  	  }
  	  else
  	  {
  	  	for(i=0;i<3;i++)
  	  {
  	  	for(j=0;j<n;j++)
  	  	{
  	  		if(i==0)
  	  		{
  	  			if(j<=n/2)
  	  			{
  	  				dp[i][j]=arr[j] ^ arr[n-1-j];
  	  			}
  	  			else
  	  			{
  	  				dp[i][j]=arr[j] ^ dp[0][n-1-j];
  	  			}
  	  		}
  	  	    else
  	  	    {
  	  	    	if(j<=n/2)
  	  			{
  	  				dp[i][j]=dp[i-1][j] ^ dp[i-1][n-1-j];
  	  			}
  	  			else
  	  			{
  	  				dp[i][j]=dp[i-1][j] ^ dp[i][n-1-j];
  	  			}
  	  	    }
  	  	}
  	  }
  	  }
      /*
  	 for(i=0;i<3;i++)
  	  {
  	  	for(j=0;j<n;j++)
  	  	{
  	  		cout<<dp[i][j]<<" ";
  	  	}
  	  	cout<<'\n';
  	  }
      */
      lli l,r; 
      l=k%n;
      r=(k/n)%3;
      if(k < n/2  && n%2 != 0)
      {
        for(i=0;i<k;i++)
        {
          cout<<dp[0][i]<<" ";
        }
        for(i=k;i<n;i++)
        {
          cout<<arr[i]<<" ";
        }
      }
      else
      {
      for(i=0;i<n;i++)
      {
        if(i<l)
          cout<<dp[r][i]<<" ";
        else
        {
          if(r==0)
            cout<<dp[2][i]<<" ";
          else
            cout<<dp[r-1][i]<<" ";
        }
      }
      }

  	cout<<'\n';
  }
return 0;
}

