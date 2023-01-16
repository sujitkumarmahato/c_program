#include<stdio.h>
#include<stdlib.h>
# define size 100
int arr[size];
int top=-1;
void push()
{
	int k;
   if(top==(size-1))
   {
	    printf("Stack is full\n");
		return ;
	}
	top++;
    printf("Enter new element\n");
	scanf("%d",&k);
	arr[top]=k;
	return ;		
}
void pop()
{
    if(top==-1)	
	{
	    printf("Stack is Empty\n");
		return ;
	}
	printf("%d is deleted\n",arr[top]);
	top--;
	return;
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is Empty\n");
		return;
	}
	printf("Output of Stack elements\n\n");
	for(i=0;i<=top;i++)
	{
		printf("%d\n",arr[i]);
	}
	return;
}
int main()
{
	int ch;
	while(1)
	{
	printf("Enter your choice for stack operation\n\n");
	printf("1----- PUSH OPERATION\n");
	printf("2----- POP OPERATION\n");
	printf("3----- DISPLAY \n");
	printf("0------ EXIT\n\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1 :push();
				break;
				
				
		case 2 : pop();
				break;
		case 3 : display();
				break;		
		case 0 : return 0;
		default :
		         printf("Wrong choice\n");					
	}
	system("pause");
	system("cls");
  } 
   
}
