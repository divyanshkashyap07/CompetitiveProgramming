#include<bits/stdc++.h>
using namespace std;

int solve(bool visited[],vector<int> adj[],int &res,int a,int b)
{
    if(a==b)
        res++;
    else
    {
        for(int i=0;i<adj[a].size();i++)
        {
            if(!visited[adj[a][i]])
            {
                visited[adj[a][i]]=true;
                solve(visited,adj,res,adj[a][i],b);
                visited[adj[a][i]]=false;
            }
        }
    }
}

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int v,e,a,b;
	    cin>>v>>e;
	    vector<int> adj[v];
	    for(int i=0;i<e;i++)
	    {
	        int u,k;
	        cin>>u>>k;
	        adj[u].push_back(k);
	    }
	    cin>>a>>b;
	    int res=0;
	    bool visited[v];
	    memset(visited,false,sizeof(visited));
	    visited[a]=true;
	    solve(visited,adj,res,a,b);
	    cout<<res<<endl;
	}
	return 0;
}  
