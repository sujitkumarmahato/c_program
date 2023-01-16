//write a program to print N odd natural number in reverse order
#include<stdio.h>
main()
{
	int i,n,num;
	scanf("%d",&n);
	num=2*n-1;
	printf("\n%d\n",num);
	for(i=1;i<n;i++)
	{
		num=num-2;
		printf("%d\n",num);
	}
	return 0;
}
