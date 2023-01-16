//write a program to calculate sum of first N even natural number.
#include<stdio.h>
main()
{
	int i,n,result=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		result=result+2*i;
	}
	printf("Sum of first %d even natural number=%d",n,result);
	return 0;
}
