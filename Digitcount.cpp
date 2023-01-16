#include<stdio.h>
#include<windows.h>
main()
{
	int x,n,y,num=0;
	printf("Enter a number\n");
	scanf("%d",&x);
	system("cls");
	y=x;
	do
	{
		n=x%10;
		x=x/10;
		num++;
	}while(x>0);
	//printf("\n %d\n",num);
	while(num>0)
	{
		printf("%d\n",y);
		y=y/10;
		num--;
	}
	
}
