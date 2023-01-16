#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for(j=i;j<=3;j++)
		printf(" ");
		for(k=1;k<=i;k++)
		printf("%d",k);
		for(j=i-1;j>=1;j--)
		printf("%d",j);
		printf("\n");
	}
}
