////write a program to calculate product of first n natural number.
#include<stdio.h>
main()
{
	int i,n,result=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		result=result*i;
	}
	printf("Product of first %d Natural number =%d",n,result);
	return 0;
}
