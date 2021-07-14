#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	cout<<s<<endl;
	int x=0,y=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='.')
		{
			y=i;
			string ss;
			ss=s.substr(x,y-1);
			int p=stoi(ss);
			if(p>255)
				cout<<"hii"<<endl;
		}
	}
	return 0;
}
