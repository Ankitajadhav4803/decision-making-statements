/* c program to accept a character as input and check whether the character is a digit */
#include<stdio.h>
void main()
{
	char ch;
	printf("enter any character=");
	scanf("%c",&ch);
	if(ch>='0' && ch<='9')
	printf("given charcter is a digit.");
	else
	printf("given character is not a digit.");
}
