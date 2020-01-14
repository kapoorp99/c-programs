#include<iostream>
using namespace std;
typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli q,i,s=0;
    cin>>q;
    int a[q];
    for(i=0;i<q;i++)
    {
    	cin>>a[i];
    }
    for(i=0;i<q;i++)
    {
    	a[i]=a[i]/10;
    	s=s+a[i];
    }
    cout<<s-1<<"\n";


	return 0;
}