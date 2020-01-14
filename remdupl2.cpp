#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
 
int main(void)
{
    int n = 0;
    cin>>n;
    for(int  i = 0;i < n; i++)
    {
        string str,str1;
        cin>>str;
        cin>>str1;
        int len = str.length();
        int len1 = str1.length();
        char arr[len],arr1[len1];
        strcpy(arr,str.c_str());
        strcpy(arr1,str1.c_str());
        for(int j = 0; j < len1;j++)
        {
            int flag = 0;
            for(int k = 0;k < len;k++)
            {
                if(arr1[j] == arr[k])
                {
                    flag = 1;
                    arr[k] = '0';
                }
            }
            if(flag == 1)
            {
                arr1[j] = '0';
            }
        }
        for(int j = 0;j<len;j++)
        {
            if(arr[j] != '0')
            {
                cout<<arr[j];
            }
        }
        for(int j = 0; j < len1;j++)
        {
            if(arr1[j] != '0')
            {
                cout<<arr1[j];
            }
        }
        cout<<endl;
    }
    
}