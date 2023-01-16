//write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	if(num%5==0)
	printf("Given number is divisible of 5\n");
	else
	printf("Given number is not divisible of 5\n");
	return 0;
}
