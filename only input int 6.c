//write a program which takes input as integers only is restrict other character from input.
#include<stdio.h>
#include<conio.h>
int getonlyintegers();
int main()
{
	int x;
	x=getonlyintegers();
	printf("Entered your number = %d",x);
	return 0;
}
int getonlyintegers()
{
	int ch,num=0;
	do
	{
		ch=getch();
		if(ch>=48&ch<=57)
		{
			printf("%d",ch);
			num=num*10+(ch-48);
		}
		if(ch==10)
		break;
	}while(1);
	return num;
}
