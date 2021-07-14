#include <bits/stdc++.h>
using namespace std;

long long int solve(int a[],int n,long long int k)
{
    int j=0;
    long long int prod=1,count=0;
    for(int i=0;i<n;i++)
    {
        prod*=a[i];
        
        while(j<i && prod>=k)
        {
            prod/=a[j];
            j++;
        }
        if(prod<k)
            count+=i-j+1;
    }
    return count;
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    long long int k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cout<<solve(a,n,k)<<endl;
	}
	return 0;
}
