// Print Pascal Triangle
#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1;i<5;i++)
	 {
	 	for(k=5;k>0;k--)
	 		printf(" ");
	 	for(j=0;j<i;j++)
	 	{
	 	    printf("*");
		 }
	 	printf("\n");
	 }
}
