//write a program to print all prime number between two given number
#include<stdio.h>
main()
{
	int x,y,i,j;
	printf("Enter two number \n");
	scanf("%d%d",&x,&y);
	if(x>y)
	{
		for(j=y;j<x;j++)
		{
			for(i=2;i<=9;i++)
			{
				if(j%i==0)
				break;
			}
			if(j==i)
			printf("%d,",j);
			if(i==10)
			printf("%d,",j);
		}
	}
	else
	 {
	 	for(j=x;j<y;j++)
	 	{
	 		for(i=2;i<10;i++)
	 		{
	 			if(j%i==0)
	 			break;
			 }
			 if(j==i)
			 printf("%d,",j);
			 if(i==10)
			 printf("%d,",j);
		 }
	 }
	 return 0;
}
