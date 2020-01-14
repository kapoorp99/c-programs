#include<bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums,int val);
int main()
{ 
	vector<int> v;
	int n,a,i,x;
	cin>>n>>x;;
	for(i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	for(auto j=v.begin();j!=v.end();j++)
	{
		cout<<*j<<"  ";
	}
	cout<<endl<<"after removing "<<x<<endl;
	removeElement(v,x);
	for(auto j=v.begin();j!=v.end();j++)
	{
		cout<<*j<<"  ";
	}
	return 0;
}
int removeElement(vector<int>& nums,int val)
{
	if(nums.empty()) return 0;
	nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
	return nums.size();
}