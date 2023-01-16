// program to print first n positive number with two bits set
#include<stdio.h>
main()
{
	int n,x,y=1,digit,count;
	printf("Enter the value of n");
	scanf("%d",&n);
	while(n>0)
	{
		x=y;
		do
		{
			count=0;
			digit=x%2;
			x=x/2;
			if(digit==1)
			 count++;
		}while(x>0);
		if(count==2)
		{
			printf("%d,",y);
			n--;
		}
		y++;
	}
	return 0;
}
