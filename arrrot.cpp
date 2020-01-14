//string rotation by 1 element
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"Enter a string\n";
	cin>>s;
	int n,l,i,j,y;
	l=s.length();
	n=l-2;
	cout<<"\nAll string rotations of the entered strings are: \n";
	for(i=0;i<l;i++)
	{
      for(j=i;j<l;j++)
      {
      	cout<<s[j];
      }
      if(i>0)
      {
      	for(y=l-1;y>n;y--)
      	{
      		cout<<s[l-y-1];
      	}
      	n--;
      }
      cout<<endl;
	}
	return 0;
}