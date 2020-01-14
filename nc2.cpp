#include <bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
typedef unsigned long long int lli;
#define M 1000000007
int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);	
  lli tc;
  cin>>tc;
  while(tc--)
  { 
  	  lli i,j,n,m,k;
  	  lli *sb;
  	  cin>>n>>m;
  	  lli a[n],b[n*n];
  	  for(i=0;i<n;i++)
  	  	cin>>a[i];
  	  k=0;
  	 for(i=0;i<(n-1);i+1)
  	 {
       for(j=i+1;j<n;j++)
       {
       	if(j != i+m)
       	{
       		b[k]=max(a[i],a[j])-min(a[i],a[j]);
       		k++;
       	}
       }
  	 }
  	 sb=std::min_element(b,b+k);
  	 lli r;
  	 r=*sb;  
  	 cout<<(r%M)<<'\n';
  }
return 0;
}