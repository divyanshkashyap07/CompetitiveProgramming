int threeSumClosest(vector<int> a, int target) 
{
    sort(a.begin(),a.end());
    int result=INT_MAX;
    for(int i=0;i<a.size()-2;i++)
    {
        int l=i+1,r=a.size()-1;
        while(l<r)
        {
            int sum=a[i]+a[l]+a[r];
            if(abs(target-sum)<abs(target-result))
                result=sum;
            else if(abs(target-sum)==abs(target-result))
                result=max(result,sum);
            if(sum>target)
                r--;
            else
                l++;
        }
    }
    return result;
}

