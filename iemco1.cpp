#include <bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
typedef long long int lli;
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
  	lli i,j,scnt=0,rcnt=0,f=0;
  	  string s,r,sc,rc;
        cin>>s>>r;
        sc=s;
  	    rc=r;
        lli ls=s.length();
        lli lr=r.length();
        for(i=0;i<ls;i++)
        {
        	f=0;
            for(j=0;j<lr;j++)
            {
                if(s[i] == r[j])
                {
                    rc[j]='1';
                    f=1;
                }
                if(rc[i]=='1')
                	rcnt++;
            }
            if(f==1)
                sc[i]='1';
            if(sc[i]=='1')
            	scnt++;
        }
        if(scnt==ls && rcnt==lr)
        {
        	cout<<-1<<'\n';
        }
        else
        {
        for(i=0;i<ls;i++)
        {
            if(sc[i]!='1')
            {
                cout<<sc[i];
            }
        }
        for(i=0;i<lr;i++)
        {
            if(rc[i]!='1')
            {
                cout<<rc[i];
            }
        }
        }
        cout<<'\n';
  }
return 0;
}

