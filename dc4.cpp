#include <bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define M 1000000007 
#define tc  lli t;cin >> t;while(t--)
typedef long long int lli;
lli ase(lli s[], lli f[], lli n); 
int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  tc
  { 
      lli i,n;
      cin>>n;
      string a,b;
      cin>>a>>b;
      lli na,nb;
      na=stoi(a,0,2);
      nb=stoi(b,0,2);
      na%=3;
      nb%=3;
      cout<<max(na,nb)%M<<'\n';
  }
return 0;
}