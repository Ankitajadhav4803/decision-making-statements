/* c program to accept the x and y coordinate of a point and find the quadrant in which the point lies */
#include<stdio.h>
void main()
{
	int x,y;
	printf("enter x coordinate of a point=");
	scanf("%d",&x);
	printf("enter y coordinate of a point=");
	scanf("%d",&y);
	if((x>0)&&(y>0))
	{
	printf("the point lies in the first quadrant.");
	}
	else if((x<0)&&(y>0))
	{
	printf("the point lies in the second quadrant.");
	}
	else if((x<0)&&(y<0))
	{
	printf("the point lies in the third quadrant.");
	}
	if((x>0)&&(y<0))
	{
	printf("the point lies in the fourth quadrant.");
	}
}
