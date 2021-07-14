#include <stdio.h> 
#include<iostream>
using namespace std;
 
int binarySearch(int arr[], int l, int r, int x,bool a) 
{ 
    int result=-1;
	while (l <= r) { 
	
		int m = l + (r - l) / 2; 

		if (arr[m] == x) 
		{
			result=m;
		//	if(a==true)
		//	l=m+1;
		//	else
			r=m-1;
		}	 

		else if (arr[m] < x) 
			l = m + 1; 


		else
			r = m - 1; 
	} 
	return result; 
} 

int main(void) 
{ 
	int arr[] = { 2, 3,3,3,3,3,3,3, 4, 10, 40 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int x = 3; 
	int first = binarySearch(arr, 0, n - 1, x,false);
	int last = binarySearch(arr, 0, n - 1, x,true); 
	cout<<"first"<<first<<" "<<"Last"<<last<<endl; 
	cout<<"count"<<last-first<<endl;
	
	return 0; 
} 

