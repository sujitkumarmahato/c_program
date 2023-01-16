#include<stdio.h>
main()
{
	int x,y,z;
	printf("Enter three number\n");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	 if(y>z)
	  printf("%d is greater\n",x);
	if(y>z)
	 printf("%d is greater\n",y); 
	 else
	 printf("%d is greater\n",z);
	 return 0; 
}
