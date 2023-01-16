#include<stdio.h>
#include<stdlib.h>
int size=100;
int Stack[size];
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
	Stack[top]=k;
	return ;		
}
void pop()
{
    if(top==-1)	
	{
	    printf("Stack is Empty\n");
		return ;
	}
	printf("%d is deleted\n",Stack[top]);
	top--;
	return;
}
int main()
{
	int ch;
	printf("Enter your choice for stack operation\n\n");
	printf("1----- PUSH OPERATION\n");
	printf("2----- POP OPERATION\n");
	printf("0------ EXIT\n\n");
	scanf("%d",&ch);
	while(1)
	{
	switch(ch)
	{
		case 1 :push();
				break;
				
				
		case 2 : pop();
				break;
		case 0 : return 0;
		default :
		         printf("Wrong choice\n");					
	}
	system("pause");
	system("cls");
  }  
}
