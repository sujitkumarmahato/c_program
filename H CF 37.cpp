//write a program to calculate H C F of two number
#include<stdio.h>
main()
{
	int x,y,k;
	scanf("%d%d",&x,&y);
	if(x>y)
	{
	 do
	 {
	 	 k=y;
	 	 y=x%y;
	 	 x=k;
	 }while(y>0);	
	}
	else
	{
		do
		{
			k=x;
			x=y%x;
			y=k;
		}while(x>0);
	}
	printf("H C F = %d",k);
	return 0;
}
