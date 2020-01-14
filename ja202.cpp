#include<bits/stdc++.h>
using namespace std;
long long int beauty(string s1,string s2)
{
    long long int i=0;
    while(i<s1.size()&&i<s2.size()&&s1[i]==s2[i])
        i++;
    long long int ans=i*i;
    return ans;
}
long long int findrest(vector<string> s1)
{
    int n=s1.size();
    if(n<2)
        return 0;
    long long int ans;
    long long int i;
    vector<string> v1;
    vector<long long int> v;
    for(i=0;i<n-1;i++)
    {
        v.push_back(beauty(s1[i],s1[i+1]));
    }
    long long int n1=v.size();
    long long int dp[n1][2];
    dp[0][0]=v[0];
    dp[0][1]=0;
    for(i=1;i<n1;i++)
    {
        dp[i][0]=dp[i-1][1]+v[i];
        dp[i][1]=max(dp[i-1][0],dp[i-1][1]);
    }
    if(max(dp[n1-1][1],dp[n1-1][0])==0)
        return 0;
    v.clear();
    vector<int> va,vb,vc,vd;
    va.push_back(0);
    for(i=1;i<n1;i++)
    {
        vc=va;
        vd=vb;
        vd.push_back(i);
        va.clear();
        va=vd;
        if(dp[i-1][0]>dp[i-1][1])
            vb=vc;
        vc.clear();
        vd.clear(); 
    }
    vc.clear();
    if(dp[n1-1][0]>dp[n1-1][1])
        vc=va;
    else
        vc=vb;
    long long int lo=0,hi,j;
    for(i=0;i<vc.size();i++)
    {
        hi=vc[i];
        for(j=lo;j<hi;j++)
        {
            v.push_back(j);
        }
        lo=vc[i]+1;
    }
    for(i=lo;i<n1;i++)
        v.push_back(i);
    if(v[0]==0)
        v1.push_back(s1[0]);
    int n3=v.size();
    for(i=1;i<n3;i++)
    {
        if(v[i]==v[i-1]+1)
        {
            v1.push_back(s1[v[i]]);
        }
    }
    if(v[n3-1]==n1-1)
        v1.push_back(s1[n1]);
    sort(v1.begin(),v1.end());
    ans=max(dp[n1-1][1],dp[n1-1][0])+findrest(v1);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        long long int ans;
        cin>>n;
        string s;
        vector<string> s1;
        for(i=0;i<n;++i)
        {
            cin>>s;
            s1.push_back(s);
        }
        sort(s1.begin(),s1.end());
        ans=findrest(s1);
        cout<<ans<<"\n";
    }
}