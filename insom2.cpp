#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc,ax,ay,bx,by,cx,cy,res=1,r1x,r1y,d1,d2;
    cin>>tc;
    while(tc--)
    {
      cin>>ax>>ay>>bx>>by>>cx>>cy;
      r1x=ax-bx;
      r1y=ay-by;
      r1x=r1x*r1x;
      r1y=r1y*r1y;
      d1=r1y+r1x;
      d1=sqrt(d1);
      r1x=ax-cx;
      r1y=ay-cy;
      r1x=r1x*r1x;
      r1y=r1y*r1y;
      d2=r1y+r1x;
      d2=sqrt(d2);
       if(d1==2 && d2==2)
        {
         cout<<7<<"\n";
        }
       else if(d1==d2 && ((ax==0 && ay==0)||(bx==0 && by==0)||(cx==0 && cy==0)))
       {
         d1=(d1-1)*(d1-2)/2;
         cout<<(d1+1)<<"\n";
       }
      else
      {
        res=d1+d2;
        cout<<res<<"\n";
      }
    }
return 0;
}


