/* c program to accept a first alphabet of the rainbow colour from the user and display it in words */
#include<stdio.h>
void main()
{
	char c;
	printf("enter alphabet=V,I,B,G,Y,O,R\n");
	scanf("%c",&c);
	switch(c)
	{
	case 'V':printf("violet");
		  break;
	case 'I':printf("indigo");
		  break;
	case 'B':printf("blue");
		  break;
	case 'G':printf("green");
		  break;
	case 'Y':printf("yellow");
		  break;
	case 'O':printf("orange");
		  break;
	case 'R':printf("red");
		  break;
	default:printf("invalid rainbow colour.");
		   break;
	}
}
	 
