#include<iostream>
using namespace std;

void reverse(int a[],int top,int rear)
{
	int temp;
	if(top<rear)
	{
		temp=a[top];
		a[top]=a[rear];
		a[rear]=temp;
		top++;
		rear--;
		reverse(a,top,rear);
	}
}


int main()
{
	int a[9]={1,2,3,4,5,6,7,8,9};
	for(int i=0;i<9;i++)
	cout<<a[i];
	cout<<endl;;
    reverse(a,0,8);
    for(int i=0;i<9;i++)
	cout<<a[i];
	return 0;
}
