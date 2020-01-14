#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,i,j,k;
    cin>>n;
    int a[n],r[n]; 
    m=0;
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    for(i=0;i<n-2;i++)
    {
      for(j=i+1;j<n-1;j++)
      {
      	for(k=j+1;k<n;k++)
      	{
      		r[m]= a[i] | ( a[j] & a[k] );
      		m++;
      	}
      }
    }
    sort(r,r+m);
    cout<<r[m-1]<<"\n";
    return 0;
}