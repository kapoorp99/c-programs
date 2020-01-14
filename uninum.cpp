#include <bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
typedef long long int lli;
lli pu(lli l, lli r); 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	lli l,r,res;
  	cin>>l>>r;
  	res=pu(l,r);
  	cout<<res<<'\n';
return 0;
}
lli pu(lli l, lli r) 
{ 
    for (lli i=l ; i<=r ; i++) 
    { 
        lli num = i; 
        bool visited[10] = {false}; 
        while (num) 
        { 
            if (visited[num % 10]) 
                break; 
  
            visited[num%10] = true; 
  
            num = num/10; 
        } 
        if (num == 0) 
            return i;
    } 
} 
