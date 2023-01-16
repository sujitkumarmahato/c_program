//write a program to calculate L C M of two number
#include<stdio.h>
main()
{
	int x,y,i,result=1;
	printf("Enter two integers\n");
	scanf("%d%d",&x,&y);
	do
	{
		for(i=2;i<=10;i++)
		{
			
			if(x%i==0 && y%i==0)
			{
				x=x/i;
				y=y/i;
				result=result*i;
			//4
			   i=1;
			}
		}
		//if(i>10)
		{
			result=result*x*y;
		}
	}while(i>12);
	printf("L C M = %d",result);
	return 0;
}
