//write a program to print first N odd natural number.
#include<stdio.h>
main()
{
	int i,n,num;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	num=1;
	printf("%d\n",num);
	for(i=1;i<n;i++)
	{
		num=num+2;
		printf("%d\n",num);
	}
	return 0;
}
