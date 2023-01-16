// sum of first N natural number TSRN
#include<stdio.h>
int sumN()
{
	int n;
	printf("Enter the value of N \n");
	scanf("%d",&n);
	int sum=0,i;
	for(i=1;i<=n;i++)
	sum=sum+i;
	return sum;
	
}
main()
{
    int sum=0;	
	sum=sumN();
	printf("Sum of first natural number =%d \n",sum);
	return 0;
}
