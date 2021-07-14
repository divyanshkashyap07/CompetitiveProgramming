#include<iostream>
using namespace std;

void merge(int a[],int l,int m,int r)
{
	int i=0,j=0,k=l;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	
	for(int x=0;x<n1;x++)
     	L[x]=a[l+x];
	for(int x=0;x<n2;x++)
	  R[x]=a[m+1+x];

	
	 
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=R[j];
		j++;
		k++;
	}
}

void merge_sort(int arr[], int l, int r) 
{ 
	if (l < r) 
	{ 
		// Same as (l+r)/2, but avoids overflow for 
		// large l and h 
		int m = (l+r)/2; 

		// Sort first and second halves 
		merge_sort(arr, l, m); 
		merge_sort(arr, m+1, r); 

		merge(arr, l, m, r); 
	} 
} 

void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
}



int main()
{
	int a[10]={4,7,12,1,8,3,56,67,45,62};
	merge_sort(a,0,9);
	print(a,10);
	return 0;
}
