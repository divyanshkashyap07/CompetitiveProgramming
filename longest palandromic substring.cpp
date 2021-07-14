#include <bits/stdc++.h>
using namespace std;

string solve(string s,int n) 
{
    int low,high,start=0;
    int max_length=1;
    
    for(int i=1;i<s.size();i++)
    {
        low=i-1;
        high=i;
        while(low>=0 && high<s.size() && s[low]==s[high])
        {
            if(high-low+1>max_length)
            {
                max_length=high-low+1;
                start=low;
            }
            low--;
            high++;
        }
        
        low=i-1;
        high=i+1;
        while(low>=0 && high<s.size() && s[low]==s[high])
        {
            if(high-low+1>max_length)
            {
                max_length=high-low+1;
                start=low;
            }
            low--;
            high++;
        }
    }
    return s.substr(start,max_length);
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    cout<<solve(s,n)<<endl;
	}
	return 0;
}
