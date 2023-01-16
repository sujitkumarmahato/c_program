#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,j,n,x;
	printf("Enter number of integers\n");
	scanf("%d",&n);
	//ptr=(int *)malloc(n* sizeof(int));
	int arr[n];
	printf("Enter %d no. of integers\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Output of input integers\n\n");
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
	for(i=1;i<n;i++)
	for(j=0;j<(n-i);j++)
	{
		if(arr[j]>arr[j+1])
		{
			x=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=x;
		}
	}
	printf("\n\nOutput after sorting:-----\n\n");
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
}
