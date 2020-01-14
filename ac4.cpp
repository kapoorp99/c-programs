#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
		int n,na,i,j,flag=0;
		cin>>n;
		na= 2*n +1;
		int x[na],y[na];
		for(i=0;i<na;i++)
		{
			cin>>x[i]>>y[i];
		}
		for(i=0;i<na;i++)
		{
			for(j=i+1;j<na;j++)
			{
			  if(x[i]!=x[j] || y[i]!=y[j])
			   {
                 flag=0;
                 break;
               
              
			   }
			   else if(x[i]==x[j] || y[i]==y[j])
			   {
			   flag=1;
			   break;
			   
			 
			   }
			  
			}
			 if(flag==1) cout<<"OK"<<'\n';
			   else cout<<"NO"<<'\n';
		}
	return 0;
}
