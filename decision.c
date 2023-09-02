/* c program to accept an integer and check if it is even or odd */
#include<stdio.h>
void main()
{
	int num;
	printf("enter any number=");
	scanf("%d",&num);
	if(num%2==0)
	printf("given number is even.");
	else
	printf("given number is odd.");	
}
