#include<stdio.h>
main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		
		for(j=i;j<4;j++)
		printf(" ");
		for(k=0;k<=i;k++)
		printf("*");
		printf("\n");
	}
}
