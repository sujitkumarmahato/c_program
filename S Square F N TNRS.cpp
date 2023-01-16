//Write a program to calculate sum of square of first N natural number(TNRS)
#include<stdio.h>
int squareSum()
{
	int sum=0,i;
	int n;
  	printf("Enter the value of N\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 sum=sum+i*i;
	return sum;
 } 
  main()
  { 
    int result;
   result=squareSum();
    printf("Sum of Square of first Nerural number = %d",result);
  	return 0;
  }
