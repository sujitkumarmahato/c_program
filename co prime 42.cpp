//write a program to check co-prime number
#include<stdio.h>
main()
{
	int x,y,i;
	printf("Enter two number\n");
	scanf("%d%d",&x,&y);
	for(i=2;i<10;i++)
	{
		if(x%i==0)
		{
			if(y%i==0)
			break;
		}
	}
	if(i==10)
	printf("%d & %d are co prime number\n ",x,y);
	else
	printf("%d & %d are not co prime number\n",x,y);
	return 0;
}
