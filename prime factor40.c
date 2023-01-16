//write a program to print all prime factor of a given number
#include<stdio.h>
main()
{
	int num,i;
	printf("Enter a number to find prime factor");
	scanf("%d",&num);
	do
	{
		for(i=2;i<10;i++)
		{
			if(num%i==0)
			{
				num=num/i;
				printf("%d,",i);
				break;
			}
			break;
		}
		if(i==10)
		printf("%d,",i);
	}while(num>0);
	return 0;
}
