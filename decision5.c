/* c program to accept three numbers and check whether the first is between the other two numbers */
#include<stdio.h>
void main()
{
	int x,y,z;
	printf("enter any three numbers=");
	scanf("%d%d%d",&x,&y,&z);
	if((x>y && x<z)||(x<y && x>z))
	printf("%d is between %d and %d",x,y,z);
	else
	printf("%d is not between %d and %d",x,y,z);
}
