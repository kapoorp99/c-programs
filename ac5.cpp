#include<bits/stdc++.h>
using namespace std;
void minE(int a[],int b[],int n);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
		int n;
		cin>>n;
		int x[n],v[n],e[n],i;
		for(i=0;i<n;i++)
		{
			cin>>x[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>v[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>e[i];
		}
		minE(v,e,n);
		cout<<e[n-1]<<'\n';


	return 0;
}
void minE(int a[],int b[],int n)
{
  pair<int, int> pairt[n]; 
   
    for (int i = 0; i < n; i++)  
    { 
        pairt[i].first = a[i]; 
        pairt[i].second = b[i]; 
    }  
    sort(pairt, pairt + n); 
       
    for (int i = 0; i < n; i++)  
    { 
        a[i] = pairt[i].first; 
        b[i] = pairt[i].second; 
    } 
}