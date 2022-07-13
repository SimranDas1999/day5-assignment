#include<stdio.h>
int main()
{
	int n1,n2, i,j,*p,*q,a[10],b[10];
	printf("no. of elements in array1: ");
	scanf("%d",&n1);
	printf("Enter the elements : ");
	for(i=0; i<n1; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("no. of elements in array2: ");
        scanf("%d",&n2);
        printf("Enter the elements : ");
        for(i=0; i<n2; i++)
        {
                scanf("%d", &b[i]);
        }
	printf("%lu %lu %lu ",&a[0],&a[1],&a[2]);
	
	p=a;
	q=b;
	for(i=0,j=n1;i<n2;i++,j++)
	{
		*(p+j)=*(q+i);
	}
	printf("The merged array is : ");
	for(i=0;i<j;i++)

	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;

}
