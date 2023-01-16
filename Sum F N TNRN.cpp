// sum of first N natural number TNRN
#include<stdio.h>
void sumN()
{
	int n,sum=0,i;
	printf("Enter the value of N \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum+i;
	printf("Sum of first %d natural number =%d \n",n,sum);
}
main()
{
	sumN();
	return 0;
}
