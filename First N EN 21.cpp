//write a program to print first N even natural number
#include<stdio.h>
main()
{
	int i,n,num=2;
	scanf("%d",&n);
	printf("%d\n",num);
	for(i=1;i<n;i++)
	{
		num=num+2;
		printf("%d\n",num);
	}
	return 0;
  }  
