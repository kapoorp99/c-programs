#include<bits/stdc++.h>
using namespace std;
void zarrcalc(string s);
int main()
{
	string s;
	s="aabcaabxaaaz";
	int i,j,k,n,cnt=0;
	n=s.length();
	int z[n];
	cout<<"size of string is "<<n<<"\n";
	for(i=0;i<n;i++)
	{
      if(i==0)
      	z[0]=0;
      else if(i>0)
      {
      	cnt=0;
      	j=i;
      		while(j<n)
      		{
      			if(s[j]==s[cnt])
      				cnt++;
      			else
      				break;
                j++;
      		}
      		z[i]=cnt;
      }
	}
	
	for(i=0;i<n;i++)
	{
		cout<<" "<<z[i];
	}
	return 0;
}
