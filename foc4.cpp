#include<bits/stdc++.h>
using namespace std;
const unsigned int m = 1000000007; 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int i,l,r,a,b,s=0;
		cin>>l>>r;
		//a=1;
		//a+=l-1;
		for(i=l;i<=r;i++)
		{
	      // s = s%m + (i%m * (i+1)%m * (i+2)%m * (i+3)%m )%m;
	      // a++;
			a=i*(i+1);w
			a%=m;
			b=(i+2)*(i+3);
			b%=m;
			s+= a*b/24 % m;
			//s = s + i*(i+1)*(i+2)*(i+3)/24;
		}
		s=s%m;
		/*a=1;
		for(i=1;i<l;i++)
		{
			ss=ss%m +(a*(a+1)*(a+2)*(a+3))%m;
			a++;
		}
		s = s%m - ss%m;
		*/
		cout<<(s * 24)%m<<'\n';
	}
}