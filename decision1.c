/* c program to accept any year as input through the keyboard and check whether the year is a leap year or not */
#include<stdio.h>
void main()
{
	int y;
	printf("enter any year=");
	scanf("%d",&y);
	if(y%4==0)
	printf("\n given year is a leap year.");
	else
	printf("\n given year is not a leap year.");
}	
