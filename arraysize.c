#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,n;
	printf("enter no of elements: ");
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	printf("memory allocated %d\n",n*(int)sizeof(int));
}
