//write a program to check whether a number is even or odd without using modulus(%) operator
#include<stdio.h>
main()
{
	int num,i,j,k=0;
	scanf("%d",&num);
	//j=num/2;
	for(i=0;i<=num/2;i++)
	{
		k=num-(2*i);
			if(k==0)
			printf("Number is even\n");
			break;

	}
	if(k!=0)
	printf("Number is odd\n");
	return 0;
}
