//write a program to print first N natural number in reverse order.
#include<stdio.h>
main()
{
	int i,n;
	scanf("%d\n",&n);
	for(i=n;i>0;i--)
	printf("%d\n",i);
	return 0;
}
