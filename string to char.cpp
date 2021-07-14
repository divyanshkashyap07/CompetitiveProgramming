#include<bits/stdc++.h>
using namespace std;
char* solve(char *q)
{
	string result;
	string s=q;
	int n=s.size();
	int i;
	if(s.substr(0,3)=="ftp")
	{
		result+=s.substr(0,3);
		result+="://";
		for(i=3;i<n;i++)
		{
			if(s.substr(i,2)=="ru")
			{
				result+=".";
				result+=s.substr(i,2);
				break;
			}
			else
				result+=s[i];
		}
	}
	else if(s.substr(0,4)=="http")
	{
		result+=s.substr(0,4);
		result+="://";
		for(i=4;i<n;i++)
		{
			if(s.substr(i,2)=="ru")
			{
				result+=".";
				result+=s.substr(i,2);
				break;
			}
			else
				result+=s[i];
		}
	}
	result+="/";
	for(int j=i+2;j<n;j++)
		result+=s[j];
		
	char *res=new char[result.size()+1];
	for(int i=0;i<result.size();i++)
		res[i]=result[i];
	return res;
}
int main()
{
	char q[10];
	cin>>q;
	cout<<solve(q)<<endl;
	return 0;
}
