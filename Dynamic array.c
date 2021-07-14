#include<stdio.h>

int main()
{
	int n,i;
	printf("Enter size of array");
	scanf("%d",&n);
	int *A=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	printf("%d",A[i]);
	return 0;
}



