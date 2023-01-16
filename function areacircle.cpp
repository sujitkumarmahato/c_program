// Write a function to calculate area of circle(TSRS)
#include<stdio.h>
float areacircle(float);
#define pi 3.14
main()
{
	float r;
	float area=0.0;
	printf("Enter redius of circle\n");
	scanf("%f",&r);
	area=areacircle(r);
	printf("Area of circle = %2.f",area);
	return 0;
}
float areacircle(float n)
{
	float result=0;
	result=n*n*pi;
	return result;
}
