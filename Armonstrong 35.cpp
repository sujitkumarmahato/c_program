//write a program to print all Armstrong number under 1000
#include<stdio.h>
main()
{
	int i,num,temp,result=0;
//	for(i=1;i<1000;i++)
	//{
	printf("Enter a number\n");
	scanf("%d",&num);
		i=num;
		do
		{
			temp=i%10;
			result=result+(temp*temp*temp);
			i=i/10;
		}while(i>1);
		if(result==num)
		printf("%d is armstrong number",result);
		else
            printf("%d is not armstrong number",num);

//	}
	return 0;
}
