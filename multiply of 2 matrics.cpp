

#include<stdio.h>
main()
{
	int arr1[3][3],arr2[3][3],arr3[3][3];
	int i,j,k,sum;
	printf("Enter First 3*3 matrics\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&arr1[i][j]);
	printf("Enter Second 3*3 matrics\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&arr2[i][j]);
		printf("Resultant Matrics =:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{ 
		  k=0; sum=0;
		  while(k<3)
		  {
		  	sum=sum+arr1[i][k]*arr2[k][j];
		  	k++;
		  }
		  arr3[i][j]=sum;
		}
	}

	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	printf("%d  ",arr3[i][j]);
	printf("\n");
    }
    return 0;
}
