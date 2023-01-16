//Series problem to print first n prime number
#include<stdio.h>
main()
{
	int n,x=1,i;
	scanf("%d",&n);
	while(n)
	{
		for(i=2;i<10;i++)
		{
			if(x%i==0)
			break;
		}
		if(x==i)
		{
			printf("%d,",x);
			n--;
		}
		else
	     {
	     	if(i==10)
	     	{
	     		printf("%d,",x);
	     		n--;
			 }
		 }
		 x++;
	}
	return 0;
}

