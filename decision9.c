/* c program to accept the time as hour,minute and seconds and check whether the time is valid */
#include<stdio.h>
void main()
{
	int h,m,s;
	printf("enter the time as hour,minute and seconds=");
	scanf("%d%d%d",&h,&m,&s);
	if((h>=0 && h<=24) && (m>=0 && m<=60) && (s>=0 && s<=60))
	printf("given time is valid.");
	else
	printf("given time is invalid.");
}	 
