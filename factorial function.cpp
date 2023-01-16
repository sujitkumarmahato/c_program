// Write a program to calculate fatorial of a given number (takes something and return something)
#include<stdio.h>
int fact(int);
main()
{
	int n,result=0;
	printf("Enter a number to find its factorial\n");
	scanf("%d",&n);
	result=fact(n);
	printf("Factorial of %d = %d",n,result);
	return 0;
}
int fact(int x)
{
	int fact=1;
	while(x>0)
	{
		fact=fact*x;
		x--;
	}
	return fact;
}
