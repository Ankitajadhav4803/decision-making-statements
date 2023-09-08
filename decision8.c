/* c program to check range */
#include<stdio.h>
void main()
{
	int n;
	int limit=50,unlimit=100;
	printf("enter the number=");
	scanf("%d",&n);
	if(n>=limit && n<=unlimit)
	printf("number is within range.");
	else
	printf("number is out of range.");
}
