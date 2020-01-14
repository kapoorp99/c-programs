#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int lli;
lli fact(lli a)
{
	lli f;
	if(a==1)
	{
		return (1);
	}
	else
	{
		f=a*fact(a-1);
		return f;
	}
}
int main()
{
	lli t,ax,ay,bx,by,cx,cy,d1,d2,r;
	cin>>t;
	while(t--)
	{
		cin>>ax>>ay>>bx>>by>>cx>>cy;
		d1=int(sqrt(pow((ax-bx),2)+pow((ay-by),2)));
		d2=int(sqrt(pow((ax-cx),2)+pow((ay-cy),2)));
		r=d1*fact(d2)+d2*fact(d1);
		cout<<r-1;
	}
}
