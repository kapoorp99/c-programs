#include <bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define M 1000000007 
#define tc  lli t;cin >> t;while(t--)
typedef long long int lli;
lli findsol(lli arr[], lli dep[], lli n);
int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  tc
  { 
  	  lli i,n;
  	  cin>>n;
  	  lli l[n],r[n];
  	  for(i=0;i<n;i++)
  	  {
  	  	cin>>l[i]>>r[i];
  	  }
  	  lli res;
  	  res=findsol(l,r,n);
  	  if(res == n)
  	  	cout<<-1<<'\n';
  	  else
  	  	cout<<res<<'\n';
  }
return 0;
}
lli findsol(lli arr[], lli dep[], lli n) 
{ 
   sort(arr, arr+n); 
   sort(dep, dep+n); 
   lli plat_needed = 0, result = 0; 
   lli i = 1, j = 0; 
 
   while (i < n && j < n) 
   {
      if (arr[i] <dep[j]) 
      { 
          plat_needed++; 
          i++; 
      } 
      else
      { 
          plat_needed--; 
          j++;
      }
   } 
  
   return plat_needed; 
} 
  