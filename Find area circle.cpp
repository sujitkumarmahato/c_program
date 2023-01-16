//write a program to calculate area of a circle
#include<stdio.h>
#define pia 3.14
int main()
{
	float r,area;
	printf("Enter radius of circle\n");
	scanf("%d",&r);
	area=3.14*r*r;
	printf("Area of circle = %2f",area);
	return 0;
}
