#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	SYSTEMTIME stime;
	GetSystemTime(&stime);
	printf("%d / %d /%d",stime.wDay,stime.wMonth,stime.wYear);
	printf("\n %d : %d",stime.wHour+6,stime.wMinute-30);
	return 0;
}
