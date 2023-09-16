/* c program , which accepts two integers and an operator as a character (+ - * /), performs the corresponding operation and displays the result */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	char ch;
	printf("enter any two integers=");
	scanf("%d%d",&a,&b);
	printf("\n enter choice=+,-,*,/ \n");
	ch=getch();
	switch(ch)
	{
	case '+':printf("addition=%d",a+b);
			break;
	case '-':printf("substraction=%d",a-b);
			break;
	case '*':printf("multiplication=%d",a*b);
			break;
	case '/':printf("division=%d",a/b);
			break;
	default:printf("invalid choice.");
		   break;
	}
}
