#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
typedef long long int lli;
lli arr[10000];
int fun(lli L , lli R);
int f(lli,lli);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tc;
	cin>>tc;
	while(tc--)
	{
      lli l,r,res;
      cin>>l>>r;
      res=fun(l,r);
      cout<<res<<'\n';
	}
}
int f(lli a,lli b)
{
   int r,rem,cnt=0;
   r=a^b;
   while(r>0)
   {
   	if(r%2==1)
   		cnt++;
   	r=r/2;
   }
   cnt=(cnt%mod)*(cnt%mod);
   cnt%=mod;
   return cnt;
}
int fun(lli L , lli R)
{
   int ans=0;
   lli i,j;
   for(i=L;i<R;i++)
   {
   	for(j=i+1;j<=R;j++)
   	{
   		ans=(ans+f(i,j))%mod;
   	}
   }	
   return ans;
}
