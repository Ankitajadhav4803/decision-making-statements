/* c program to accept a number and check if it is divisible by 5 and 7 */
#include<stdio.h>
void main()
{
	int num;
	printf("enter any number=");
	scanf("%d",&num);
	if(num%5==0 && num%7==0)
	printf("given number is divisible by 5 and 7.");
	else
	printf("given number is not divisible by 5 and 7.");
}
