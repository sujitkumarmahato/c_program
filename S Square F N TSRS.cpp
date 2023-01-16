//Write a program to calculate sum of square of first N natural number(TSRS)
#include<stdio.h>
int squareSum(int n)
{
	int sum=0,i;
	for(i=1;i<=n;i++)
	 sum=sum+i*i;
	return sum;
 } 
  main()
  { 
    int result;
    int n;
  	printf("Enter the value of N\n");
	scanf("%d",&n);
    result=squareSum(n);
    printf("Sum of Square of first %d Nerural number = %d",n,result);
  	return 0;
  }
