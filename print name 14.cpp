//write a program to print your name 5 times on the screeb
#include<stdio.h>
main()
{
	char name[10];int i;
	scanf("%s",name);
	for(i=0;i<5;i++)
	{
		printf("\n%s\n",name);
	}
	return 0;
}
