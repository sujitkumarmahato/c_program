// 44 write a program to convert a bunary number to decimal number
#include<stdio.h>
main()
{
	int n,i,count=0,base,digit,result=0;
	printf("Enter your Binary number\n");
	scanf("%d",&n);
	do
	{
		digit=n%10;
		n=n/10;
		base=1;
		for(i=count;i>0;i--)
		{
			base=base*2;
		}
		count++;
		result=result+digit*base;
	}while(n>0);
	printf("Decimal number =%d",result);
	return 0;
}
