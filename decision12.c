/* c program to accept an integer and check if it is positive, negative or zero */
#include<stdio.h>
void main()
{
	int n;
	printf("enter any integer=");
	scanf("%d",&n);
	if(n>0)
	printf("given integer is positive.");
	else if(n<0)
	printf("given integer is negative.");
	else
	printf("given integer is zero.");
}
