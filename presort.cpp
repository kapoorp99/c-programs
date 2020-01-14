#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t,i,j,n;
   cin>>t;
   for(i=0;i<t;i++)
   {
       cin>>n;
       int a[n];
       for(j=0;j<n;j++)
           cin>>a[j];
       sort(a,a+n);
       for(j=0;j<n;j++)
           cout<<a[j]<<" ";
           
        cout<<endl;   
   }
return 0;
}
