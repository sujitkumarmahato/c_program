//write a program to calculate sum of first N odd number
#include<stdio.h>
main()
{
	int i,n,num,result=0;
	scanf("%d",&n);
	num=1;
	for(i=1;i<=n;i++)
	{
		result=result+num;
		num=num+2;
	}
	printf("Result= %d",result);
	return 0;
}
