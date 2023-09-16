/* c program to accept days in single digit from the user and display it in words */
#include<stdio.h>
void main()
{
	int d;
	printf("enter day in single digit=");
	scanf("%d",&d);
	switch(d)
	{
	case 1:printf("monday");
		  break;
	case 2:printf("tuesday");
		  break;
	case 3:printf("wednesday");
		  break;
	case 4:printf("thursday");
		  break;
	case 5:printf("friday");
		  break;
	case 6:printf("saturday");
		  break;
	case 7:printf("sunday");
		  break;
	default:printf("invalid day");
		   break;
	}
}
