//write a program to check whether a given number is even or odd.
#include<stdio.h>
main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\n Number is even\n");
	}
	else
	 printf("Number is odd\n");
	 return 0;
}
