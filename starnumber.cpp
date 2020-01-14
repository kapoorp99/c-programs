#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int i,n;
		cin>>n;	
		int a[n];
		for(i=0;i<n;i++)
		  { 
		 	cin>>a[i];
		  }	
		if(n%2==0)
		{
			cout<<"-1"<<'\n';
		}
		else
		{
		   sort(a,a+n);
		    for(i=0;i<n-1;i=i+2)
		     {
		  	  if(a[i]!=a[i+1])
		  	   {
		  		break;
		  	   }
		     }
		     cout<<a[i]<<'\n';
	    }   
	}
	return 0;
}