/* c program to accept a lowercase character from the user and check whether the character is a vowel or consonant */
#include<stdio.h>
void main()
{
	char ch;
	printf("enter a lowercase character=");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	printf("given character is vowel.");
	else
	printf("given character is consonant.");
}
