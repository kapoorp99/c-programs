//z algorithm
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	int i,j,m,ls,lp; 
	string s,p;
	s="testtestttesttest";
	p="test";
	ls=s.length();
	lp=p.length();
	int z[ls];
	cout<<ls<<"\n"<<lp<<"\n";
	for(i=0;i<ls;i++)
	{
		m=0;
		if(i==0)
		{
			z[i]=0;
		}
		else
		{
			for(j=i;j<ls;j++)
			{
				if(s[j]==s[m])
				{
					m++;
				}
				else
				{
					break;
				}
			}
			z[i]=m;
		}
	}
	cout<<"Z array is\n";
	for(i=0;i<ls;i++)
	{
		cout<<z[i]<<" ";
	}
	cout<<"\n";
	for(i=0;i<ls;i++)
	{
      if(z[i]==lp || z[i]>lp)
      {
      	cout<<"pattern found at index "<<i<<"\n";
      	
      }
	}
	return 0;
}