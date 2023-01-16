//write a program to print table of user choice
#include<stdio.h>
main()
{
	int i,n,result;
	printf("Enter your choice to be find table\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		result=n*i;
		printf("%d X %d = %d\n",n,i,result);
	}
	return 0;
}
