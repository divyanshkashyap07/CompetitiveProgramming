#include <bits/stdc++.h>
using namespace std;

int solve(int a[],int n,int k)
{
    int max_sum[n],sum=0;
    max_sum[0]=a[0];
    for(int i=1;i<n;i++)
        max_sum[i]=max(max_sum[i-1]+a[i],a[i]);
    
    for(int i=0;i<k;i++)
        sum+=a[i];
    
    int result=sum;
    for(int i=k;i<n;i++)
    {
        sum=a[i]-a[i-k];
        result=max(result,sum);
        result=max(result,sum+max_sum[i-k]);
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
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cin>>k;
	    cout<<solve(a,n,k)<<endl;
	}
	return 0;
}
