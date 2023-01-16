//write a program to calcute sum of the digit of a given number
#include<stdio.h>
main()
{
	int num,temp,sum=0;
	scanf("%d",&num);
	do
	{
		temp=num%10;
		sum=sum+temp;
		num=num/10;
	}while(num>0);
	printf("Digit sum = %d",sum);
	return 0;
}
