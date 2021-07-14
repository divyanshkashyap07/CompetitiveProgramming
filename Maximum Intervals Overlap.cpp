#include <bits/stdc++.h>
using namespace std;

void count(int a[],int b[],int n)
{
    sort(a,a+n);
    sort(b,b+n);
    int result=0,time1=0;
    int max_result=0;
    int i=0,j=0;
    while(i<n && j<n)
    {
        if(a[i]<=b[j])
        {
            result++;
            if(result>max_result)
            {
                max_result=result;
                time1=a[i];
            }
            i++;
        }
        else
        {
            result--;
            j++;
        }
    }
    cout<<max_result<<" "<<time1<<endl;
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=0;i<n;i++)
	        cin>>b[i];
	    count(a,b,n);
	}
	return 0;
}
