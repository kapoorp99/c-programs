#include<iostream>
using namespace std;
typedef long long int lli;
const lli l=1000000007;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli m,n;
		cin>>n>>m;
	    lli r;
	    r=m*n;
	    if(r%2==0)
	    	cout<<r/2<<'\n';
	    else
	    	cout<<(r/2)+1;
	return 0;
}