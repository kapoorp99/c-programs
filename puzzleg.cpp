#include<iostream>
using namespace std;
int main()
{
	int a[9],b[9],tc,c=0,i;
	a[0]=1;
	a[1]=2;
	a[2]=3;
	a[3]=4;
	a[4]=5;
	a[5]=6;
	a[6]=7;
	a[7]=8;
	a[8]=9;
	cin>>tc;
	while(tc--)
	{
      for(i=0;i<9;i++)
      	{
      		cin>>b[i];
      	}
      	for(i=0;i<9;i++)
      	{
      		if(a[i]==b[i])
      			c++;
      	}
      	if(c==0)
      		cout<<"-1"<<endl;
      	else
      		cout<<(9-c);
	}
	return 0;
}