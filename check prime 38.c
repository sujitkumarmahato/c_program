//write a program to check whether a given number prime or not
#include<stdio.h>
main()
{
	int num,i;
	printf("Enter a number\n");
	scanf("%d",&num);
	for(i=29;i<=9;i++)
	{
		if(num%i==0)
		break;
	}
	if(num==i)
	printf("%d is prime number",num);
	else if(i==10)
	printf("%d is prime number",num);
	else
	  printf("%d is not prime number\n",num);
	  return 0;
	
}
