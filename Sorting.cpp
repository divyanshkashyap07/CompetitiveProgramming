#include<iostream>
using namespace std;

void selection_sort(int a[],int n)
{
	int min,temp;
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				temp=a[min];
				a[min]=a[j];
				a[j]=temp;
				min=j;
			}
		}
	}
}

void bubble_sort(int a[],int n)
{
	int temp;
	bool swapped;
	for(int i=0;i<n-1;i++)
	{
		swapped=false;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			    temp=a[j];
				a[j]=a[j+1];
			    a[j+1]=temp;
			    swapped=true;
			}
		}
		if(swapped=false)
		{
			break;
		}
	}
}

void insertion_sort(int a[],int n)
{
	int key,temp,j;
	for(int i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
	    while(j>=0 && a[j]>key)
	    {
	       a[j+1]=a[j];
	       j--;
		}
		a[j+1]=key;
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
	insertion_sort(a,10);
	print(a,10);
	return 0;
}
