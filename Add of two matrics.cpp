#include<stdio.h>
main()
{
	int arr1[3][3];
	int arr2[3][3];
	int arr3[3][3];
	int i,j;
	printf("Enter nine integers for First Matrics\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&arr1[i][j]);
	printf("Enter nine integers for second Matrics\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&arr2[i][j]);
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	arr3[i][j]=arr1[i][j]+arr2[i][j];
	printf("Addition of Two matrics = \n");
	for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
	 printf("%d  ",arr3[i][j]);
	 printf("|\n");
   }
   return 0;
	
}
