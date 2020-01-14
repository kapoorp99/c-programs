#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,i,j,a1,a2,r;
        cin>>m>>n;
        int arr[n]; 
        for(i=0;i<n;i++)
            cin>>arr[i];
            r=m-arr[0];
            for(j=1;j<n;j++)
            {
                if(arr[j]==r)
                {
                   a2=j+1;
                    break;
                    
                }
            }
          a1=i+1;
        cout<<a1<<" "<<a2<<'\n';
    }
    return 0;
}
