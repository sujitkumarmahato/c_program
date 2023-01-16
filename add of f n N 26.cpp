//write a program to calculate sum of first N natural number.
#include<stdio.h>
main()
{
	int i,n,result=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		result =result+i;
	}
	printf("Addition of First %d Natural number = %d",n,result);
	return 0;
}
