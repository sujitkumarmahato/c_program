//write a program to print first N terms of fibinacci series
#include<stdio.h>
main()
{
	int a,b,c,i,n;
	scanf("%d",&n);
	a=0;
	b=1;
	c=0;
	printf("%d,%d,",a,b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d,",c);
	}
	return 0;
}
