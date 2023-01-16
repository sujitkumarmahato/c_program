//Write a program to calculate sum of square of first N natural number(TNRN)
#include<stdio.h>
void squareSum()
{
	int n, sum=0,i;
	printf("Enter the value of N\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 sum=sum+i*i;
	 printf("Sum of Square of first %d Nerural number = %d",n,sum);
 } 
  main()
  {
  	squareSum();
  	return 0;
  }
