//write a program to calculate x power y.
#include<stdio.h>
main()
{
	int x,y,result=1,i;
	printf("Enter the value of x and y\n");
	scanf("%d%d",&x,&y);
	for(i=y;i>0;i--)
	{
		result=result*x;
	}
	printf("Value of %d^%d = %d",x,y,result);
	return 0;
}
