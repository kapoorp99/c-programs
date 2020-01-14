#include<bits/stdc++.h>
#include<string>
using namespace std;
int cs(string s);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s,ts;
        int q,l,r,x,y,m,ans=0,n,res,rest=0;
        cin>>s;
        cin>>q>>l>>r>>x>>y>>m;
        n=s.length();
        while(q--)
        {
           l=1+(l+ans)%n; 
           r=1+(r+ans)%n;
           if(l>r)
            swap(l,r);
           x=1+(x+ans)%m;
           y=1+(y+ans)%n;
           if(x>y) 
            swap(x,y);
           for(int i=l;i<=r;i++)
           {
            for(int j=x;j<=y;j++)
            {
                ts=s.substr(i,j);
                ans=+cs(ts)
                
            }
           }
           rest=rest+ans;
        }
        cout<<rest<<'\n';
    }
    return 0;
}
int cs(string s) 
{ 
    unordered_map<string, int> m; 
    for (int i = 0; i < s.length(); i++) { 
  
        // check for odd length palindromes 
        for (int j = 0; j <= i; j++) { 
  
            if (!s[i + j]) 
                break; 
  
            if (s[i - j] == s[i + j]) { 
  
                // check for palindromes of length 
                // greater than 1 
                if ((i + j + 1) - (i - j) > 1) 
                    m[s.substr(i - j,  
                        (i + j + 1) - (i - j))]++; 
  
            } else
                break; 
        } 
  
        // check for even length palindromes 
        for (int j = 0; j <= i; j++) { 
            if (!s[i + j + 1]) 
                break; 
            if (s[i - j] == s[i + j + 1]) { 
  
                // check for palindromes of length  
                // greater than 1 
                if ((i + j + 2) - (i - j) > 1) 
                    m[s.substr(i - j,  
                         (i + j + 2) - (i - j))]++; 
  
            } else
                break; 
        } 
    } 
    return m.size(); 
} 