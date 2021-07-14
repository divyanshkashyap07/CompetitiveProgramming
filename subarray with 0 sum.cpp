#include <bits/stdc++.h>
using namespace std;

int solve(int a[],int n)
{
    unordered_map<int,int> mp;
    int sum=0;
    int result=INT_MAX;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum==0)
        	result=min(result,i+1);
        
        if(mp.find(sum)!=mp.end())
            result=min(result,i-mp[sum]);
        else
            mp[sum]=i;
    }
    return result;
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cout<<solve(a,n)<<endl;
	}
	return 0;
}
