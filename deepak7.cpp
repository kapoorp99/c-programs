#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int lli;
lli f(lli i,lli j,lli r)
{

   int s=0;
   if(j==r)
   {
      bitset<100> b1((i^j));
      s=pow(b1.count(),2);
      return s;
   }
   else{
      bitset<1000> b1((i^j));
      s=s+pow(b1.count(),2)+f(i,j+1,r);
      return s;
   }
}
int main()
{
   
   lli l,r,i,j=0,t;
   cin>>t;
   while(t--)
   {
      cin>>l>>r;
      for(i=l;i<r;i++)
      {
         j=j+f(i,i+1,r);

      }
      cout<<j%mod;
   }
}

