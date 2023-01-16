#include<stdio.h>
main()
{
	int i,j,sum=0;
	for(i=1;i<=150;i=i+2)
	{
		for(j=2;j<10;j++)
		{
			if(i%j==0)
			{
				if(i==j)
				  break;
				   printf("%d,",i);
				    sum++;
				   break;
			}
		}
		//sum=sum+i;
	}
	printf("\nNumber of prime number=%d",sum);
}
