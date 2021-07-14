#include<iostream>
using namespace std;

int partition(int a[],int l,int r)
{
	int pivot=a[r];
	int temp,temp1;
	int index=l;
	for(int i=l;i<r;i++)
	{
		if(a[i]<=pivot)
		{
			temp=a[i];
			a[i]=a[index];
			a[index]=temp;
			index++;
		}
	}
	temp1=a[index];
	a[index]=a[r];
	a[r]=temp1;
	return (index);
}

void Quick_sort(int a[],int l,int r)
{
	if(l<r)
	{
		int pivot=partition(a,l,r);
		Quick_sort(a,l,pivot-1);
		Quick_sort(a,pivot+1,r);
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
	Quick_sort(a,0,9);
	print(a,10);
	return 0;
}
