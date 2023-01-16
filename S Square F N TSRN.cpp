//Write a program to calculate sum of square of first N natural number(TSRN)
#include<stdio.h>
void squareSum(int n)
{
	int sum=0,i;
	for(i=1;i<=n;i++)
	 sum=sum+i*i;
	 printf("Sum of Square of first %d Nerural number = %d",n,sum);
 } 
  main()
  { 
   int n;
  	printf("Enter the value of N\n");
	scanf("%d",&n);
  	squareSum(n);
  	return 0;
  }
