//write a program to count digit in a given number.
#include<stdio.h>
main()
{
long int num,temp,k=0;
	scanf("%d",&num);
	do
	{
		temp=num%10;
		num=num/10;
		k++;	
	}while(num>1);
	printf("Number of digit = %d",k);
	return 0;
}
