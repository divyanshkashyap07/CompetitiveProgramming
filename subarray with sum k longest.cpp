#include <bits/stdc++.h>
using namespace std;

int solve(int a[],int n,int k)
{
    unordered_map<int,int> mp;
    int sum=0,result=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum==k)
            result=i+1;
        
        if(mp.find(sum-k)!=mp.end())
            result=max(result,i-mp[sum-k]);
            
        if(mp.find(sum)==mp.end())
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
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cout<<solve(a,n,k)<<endl;
	}
	return 0;
}
