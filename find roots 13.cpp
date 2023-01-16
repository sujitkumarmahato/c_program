//write a program to find roots
#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,d,x,y;
	printf("Enter the value of a, b, c\n");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-(4*a*c);
	if(d>=0)
	{
		x=(-b+sqrt(d))/2*a;
		y=(-b-sqrt(d))/2*a;
		printf("X=%d  Y=%d",x,y);
	}
	else
	printf("Roots are imaginary\n");
	return 0;
}
