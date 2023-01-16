// 45 write a program to print ASCII value of all character
#include<stdio.h>
main()
{
	int i;
	for(i=0;i<=255;i++)
	{
		//if(i%25==0)
		  //printf("\n");
		  printf("%d -: %c\n",i,i);
	}
	return 0;
}
