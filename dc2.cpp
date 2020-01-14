#include <bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define M 1000000007 
#define tc  lli t;cin >> t;while(t--)
typedef long long int lli;
lli addf(lli A,lli B);
int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  tc
  { 
  	  string a,b;
  	  cin>>a>>b;
  	  stringstream stra(a),strb(b);
  	  lli na=0,nb=0,cnt=0;
  	 // na=stoi(a,0,2);
  	 // nb=stoi(b,0,2);
  	  stra>>na;
  	  strb>>nb;
  	  cnt=addf(na,nb);
  	  cout<<cnt<<'\n';
  }
return 0;
}
lli addf(lli A,lli B)
{
	lli U,V,c=0;
    while (B > 0)
    {
        U = A ^ B;
        V = A & B;
        A = U;
        B = V * 2;
        c++;
    }
    return c;
}

