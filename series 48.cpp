//Series problem program in c
#include<stdio.h>
main()
{
	int n,i,j,sum,result=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j<=i;j++)
		{
			sum=sum+j;
		}
		result=result+sum;
	}
	printf("Result=%d",result);
	return 0;
	
}
