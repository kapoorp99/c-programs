#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,j=0;
	cout<<"enter size of array:\n";
	cin>>n;
    int a[n],b[n];
    cout<<"highest value element:\n";
    cin>>k;
    int count[k+1];
    for(i=0;i<(k+1);i++)
    	count[i]=0;

    cout<<"enter array elements:\n";

    for(i=0;i<n;i++)
    	cin>>a[i];
    
    for(i=0;i<(k+1);i++)
    {
    	  count[a[i]]=++count[a[i]];
    }

    for(i=0;i<(k+1);i++)
    	cout<<"  "<<count[i];
    
    for(i=0;i<(k+1);i++)
    {
    	while(count[i]!=0)
    	{
    		b[j]=i;
    		count[i]--;
    		j++;
    	}
    }

    cout<<" \n sorted array is \n";

    for(i=0;i<n;i++)
    	cout<<" "<<b[i];

	return 0;
}