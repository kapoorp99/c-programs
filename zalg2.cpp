#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	int i,j,m,n,k,cnt;
	string s,p;
	s="testtestttesttest";
	p="test";
	m=s.length();
	n=p.length();
	int z[m+n+1];
	cout<<m<<"\n"<<n<<"\n";
	for(i=0;i<m;i++)
	{
		cnt=0;
		for(j=0;j<m;j++)
		{
			k=j-1;
			if(s[j]==s[k])
			{
				cnt++;
			}
			k++;
		}
		z[i]=cnt;
	}
	for(i=0;i<m;i++)
	{
      cout<<z[i]<<" ";
	}
	return 0;
}
//0 0 0 1 5 0 0 1 1 8 0 0 1 4 0 0 1 