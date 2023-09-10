/* c program to accept three sides of triangle as input,and print whether the triangle is valid or not */
#include<stdio.h>
void main()
{
	int s1,s2,s3;
	printf("enter the three sides of triangle=");
	scanf("%d%d%d",&s1,&s2,&s3);
	if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2)
	printf("given triangle is valid.");
	else
	printf("given triangle is invalid.");
}	 
