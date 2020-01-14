#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
typedef long long int lli;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
  cin>>tc;
  while(tc--)
  { 
  	  lli j,i,n,c=1,k=0;
      lli* p;
      lli* q;
      cin>>n;
      lli a[n];
      for(i=0;i<n;i++)
      	cin>>a[i];
      for(i=1;i<n;i++)
      {
        j=max(i-5,k);
        p=std::min_element(a+j,a+i+1);
        q=std::max_element(a+j,a+i);
        if(*p == a[i] && a[i]!= *q)
        {
          c=c+1;
        }
      }
      cout<<c<<'\n';
  }
return 0;
}

