#include <bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define M 1000000007 
typedef long long int lli;
#define tc  lli t;cin >> t;while(t--)
#define ffi(x,y) for(lli i=x;i<y;i++)
#define ffj(x,y) for(lli j=x;j<y;j++)
#define frj(x,y) for(lli j=x;j>y;j--)
#define fri(x,y) for(lli i=x;i>y;i--)
typedef long long int lli;
lli gpc(lli arr[], lli sum);
int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  tc
  { 
  	  lli w1,w2,w3,s;
  	  cin>>s>>w1>>w2>>w3;
  	   if(w1==w2 && w2==w3)
  	  {
  	  	if(s>=w1+w2+w3)
  	  		cout<<1<<'\n';
  	  	else if((s>= w1+w2) || (s>= w2+w3) )
  	  		cout<<2<<'\n';
  	  	else
  	  		cout<<3<<'\n';
  	  }
  	  else
  	  {
  	  	lli sum;
  	  	if(s>=w1+w2+w3)
  	  		cout<<1<<'\n';
  	  	else if((s >= w1+w2) || (s >= w2+w3))
  	  		cout<<2<<'\n';
  	  	else
  	  		cout<<3<<'\n';
  	  }
  }
  return 0;
}

