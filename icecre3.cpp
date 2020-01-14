#include<bits/stdc++.h>
using namespace std;
 vector<int> twoSum(vector<int> nums, int target) 
    {
        vector<int>tmp;
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    tmp.push_back(i);
                    tmp.push_back(j);
                    return tmp;
                }
            }
        }
       return tmp; 
    }
int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        vector<int>tmp;
        cin>>m>>n;
        for(int j=0;j<n;j++)
            cin>>tmp;

        tmp = twoSum(tmp,m);
     for(int i = 0; i < tmp.size(); i++)
       {
         cout << tmp[i];
         if(tmp.size()-1 != i)
            cout << " ";
       }
     cout  << endl; 
    }

 return 0;
}