#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,p;
	int i=0,j,c=0,avp=0,sum=0,pl,sl;
	cout<<"enter a string:\n";
	cin>>s;
	cout<<"enter a pattern:\n";
	cin>>p;
	sl=s.length();
	cout<<"\nlength of string is\n"<<sl<<endl;
	pl=p.length();
	cout<<"\nlength of pattern is\n"<<pl<<endl;
	while(p[i]!='\0')
	{
      avp=avp+int(p[i]);
      i++;
	}
	i=0;
	while(s[i]!='\0')
	{
      sum=0;
      if(s[i]==p[0])
      {
      	for(j=i;j<i+pl;j++)
      	{
      		sum=sum+int(s[j]);
      	}
      	if(sum==avp)
      	{
      		c++;
      		cout<<"\npattern found at index "<<i<<"\n";
      	}
      }
      i++;
	}
	cout<<"\npattern counts:\n"<<c;

	return 0;
}