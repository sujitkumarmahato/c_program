// 43 write a program to print N co-prime number
#include<stdio.h>
main()
{
	int i,j,k,N,x=0;
	printf("Enter the value of N\n");
	scanf("%d",&N);
	for(i=0;i<=N;i++)
	{
		j=2;
		while(j<=(N*2))
		{
			for(k=2;k<10;k++)
			{
				if(j%k==0)
				{
					if((j+1)%k!=0)
					{
						printf("(%d,%d)\n",j,j+1);
						x=1;
						j++;
						break;
					}
				}
			//	if(x==1)
			//	break;
			}
			//	if(x==1)
			//	break;
		}
	}
	return 0;
}
