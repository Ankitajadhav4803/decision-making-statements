/* c program to check whether given character is a digit or a character in lowercase or uppercase alphabet */
#include<stdio.h>
void main()
{
	char ch;
	printf("enter any character=");
	scanf("%c",&ch);
	if(ch>=48 && ch<=58)
	printf("given character is a digit.");
	else if(ch>=97 && ch<=122)
	printf("given character is a lowercase alphabet.");
	else if(ch>=65 && ch<=90)
	printf("given character is a uppercase alphabet.");
}
