/* c program to accept an year and check if it is leap year or not */
#include<stdio.h>
int main()
{
	int y;
	printf("enter any year=");
	scanf("%d",&y);
	if(y%4==0)
	printf("\n given year is leap year.");
	else
	printf("\n given year is not leap year.");
}	
