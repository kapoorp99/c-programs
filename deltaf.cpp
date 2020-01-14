#include <bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define M 1000000007 
#define tc  lli t;cin >> t;while(t--)
typedef long long int lli;
lli phi(lli n);
int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL); 
  	lli i,j,n,s=0,v,l;
  	cin>>n;
  	for(i=2;i<=n;i++)
  	{
  	    lli res;
  	    res=phi(i);
  		v= res%M * i%M;
  		l= n%M / i%M;
  		v=(v%M) * (i%M);
  		v=(v%M) * (l%M);
  		s=(s%M) + (v%M);
  	}
  	s=(s%M + n%M)%M;
  	cout<<s%M<<'\n';
return 0;
}
lli phi(lli n) 
{
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            while(n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if(n > 1)
        result -= result / n;
    return result;
}
