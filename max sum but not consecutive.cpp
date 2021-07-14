#include <bits/stdc++.h>
using namespace std;

int solve(int a[],int n)
{
    if(n==0)
        return 0;
    int dp[n];
    
    dp[0]=a[0];
    dp[1]=max(a[0],a[1]);
    for(int i=2;i<n;i++)
        dp[i]=max(a[i]+dp[i-2],dp[i-1]);
        
    return dp[n-1];
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
