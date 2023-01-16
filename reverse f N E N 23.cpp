//write a program to print N even natural number in reverse order
#include<stdio.h>
main()
{
	int i,n,num=0;
	scanf("%d",&n);
	num=n*2;
	printf("\n%d\n",num);
	for(i=1;i<n;i++)
	{
		num=num-2;
		printf("%d\n",num);
	}
	return 0;
}
