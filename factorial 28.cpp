////write a program to calculate factorial of a number.
#include<stdio.h>
main()
{
	int i,num,fact;
	scanf("%d",&num);
	fact=num;
	for(i=1;i<=num;i++)
	{
		fact=fact*(num-1);
		num=num-1;
	}

	printf("Factorial =%d ",fact);
	return 0;
}
