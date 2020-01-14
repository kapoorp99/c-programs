#include <bits/stdc++.h>  
using namespace std;
void printPairs(int arr[], int arr_size, int sum) 
{ 
    set<int> s; 
    int temp = sum - arr[0]; 
    for (int i = 0; i < arr_size; i++) 
    { 
        if (s.find(i) != s.end()) 
            cout << "Pair with given sum " << sum << " is (" << 1 << ", " << i+1 << ")" << endl; 
  
        //s.insert(arr[i]); 
    } 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,i,j,a1,a2,r;
        cin>>m>>n;
        int arr[n]; 
        for(i=0;i<n;i++)
            cin>>arr[i];
        printPairs(arr,n,m);
    }
    return 0;
}
