#include <bits/stdc++.h>
using namespace std;
void fun(vector<int> &A, int sum, vector<vector<int> >&result, vector<int> current, int pos)
{

	if(sum==0)
	{
		result.push_back(current);
		return;
	}
	if(sum<0 || pos>=A.size())
		return;

	current.push_back(A[pos]);
	fun(A, sum-A[pos], result,  current, pos );
	current.pop_back();
	fun(A, sum, result,  current, pos+1 );
}


vector<vector<int> > combinationSum(vector<int> &A, int B) 
{
    sort(A.begin(),A.end());
	vector<vector<int> > result;
	vector<int> current, C;
	int i,j;
	for(i=0;i<A.size();i++)
	{
	    j=i+1;
	    while(j<A.size() && A[i]==A[j])
	    {
	        j++;
	    }
	    C.push_back(A[i]);
	    i=j-1;
	}
	    
	
	fun(C, B, result, current,0);
	return result;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        vector<vector<int> > result;
   		result=combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	

