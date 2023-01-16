//write a program to reverse a number
#include<stdio.h>
main()
{
	int num,temp,rev=0,num1;
	scanf("%d",&num);
	num1=num;
	do
	{
		temp=num%10;
		rev=rev*10+temp;
		num=num/10;
	}while(num>0);
	printf("Reverse number of %d = %d",num1,rev);
	return 0;
}
