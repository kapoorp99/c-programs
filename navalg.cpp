//naive alogorithm
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	int j,i,ls,lp,cnt=0,m=0;
	string str,ptr;
	str="012340101234";
	ptr="01234";
	ls=str.length();
	lp=ptr.length();
	cout<<ls<<"\n"<<lp<<"\n";
	for(i=0;i<(ls-lp)+1;i++)
	{   
		cnt=0;
		m=0;
		for(j=i;j<i+lp;j++)
		 {
          if(ptr[m]==str[j])
           {
          	cnt++;
           }
           m++;
         }
         if(cnt==lp)
         {
         	cout<<"pattern found at index "<<i<<"\n";
	     }
	}
	return 0;
}