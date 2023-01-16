//write a program to swap two number without using third variable
#include<stdio.h>
main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After Swaping X=%d Y=%d",x,y);
	return 0;
}
