#include<iostream>
using namespace std;
int rdig(int n);
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin>>t;
	while(t--)
	{
		int a,b,r;
		cin>>a>>b;
		a=rdig(a);
		b=rdig(b);
		r=rdig(a+b);
		cout<<r<<"\n";
	}
	return 0;
}
int rdig(int n) 
{ 
    int r=0; 
    while (n>0) 
    { 
        r=(r*10)+(n%10); 
        n/=10; 
    } 
    return r; 
} 