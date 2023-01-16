//Write a program to swap two number 
#include<stdio.h>
int main()
{
	int x,y,temp;
	printf("Enter two number\n");
	scanf("%d%d",&x,&y);
	printf("Before Swap X=%d and Y=%d",x,y);
	temp=x;
	x=y;
	y=temp;
	printf("\n\nAfter Swap X=%d and Y=%d",x,y);
	return 0;
}
