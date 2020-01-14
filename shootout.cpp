#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int tc;
  int ax,ay,bx,by,cx,cy,dx,dy;
  int r1p1,r1p2,r2p1,r2p2;
  cin>>tc;
  while(tc--)
  {
  	cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
  	r1p1=by-ay;
  	r1p2=(by-ay)/(cx-ax)*(bx-ax);
  	r2p1=dy-ay;
  	r2p2=(dy-ay)/(cx-ax)*(dx-ax);
  	if((r1p1==r1p2 || r2p1==r2p2) && ax<bx && cx>bx && ay<by && cy>by)
  		cout<<"Yes\n";
  	else
  		cout<<"No\n";
  	

  }
	return 0;
}