#include<iostream>
 
using namespace std;
 
int main()
{
    int i,j,len,flag=1;
    string a;
    cin>>a;
    
    for(len=0;a[len]!='\0';++len);
        cout<<len<<"\n";
    
    for(i=0,j=len-1;i<len/2;++i,--j)
    {
        if(a[j]!=a[i])
            flag=0;
    }
    
    if(flag==1)
        cout<<"\nPalindrome";
    else
        cout<<"\nNot Palindrome";
 
    return 0;
}