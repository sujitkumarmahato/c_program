// sum of first N natural number TSRN
#include<stdio.h>
void sumN(int n)
{
	int sum=0,i;
	for(i=1;i<=n;i++)
	sum=sum+i;
	printf("Sum of first %d natural number =%d \n",n,sum);
}
main()
{
	int n;
	printf("Enter the value of N \n");
	scanf("%d",&n);
	sumN(n);
	return 0;
}
