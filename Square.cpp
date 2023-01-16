#include<stdio.h>
#include<math.h>
main()
{
	int i;
	int result;
	for(i=1;i<=100;i++)
	{
		result=i*i;
		printf("\n%d=%d   %d= %d   %d= %.2f",i,result,i,i*i*i,i,sqrt(i));
	}
}
