/* c program, which accepts annual basic salary of an employee and calculates and displays the income tax */
#include<stdio.h>
void main()
{
	float sal;
	printf("enter annual basic salary of an employee=");
	scanf("%f",&sal);
	if(sal<150000)
	printf("\n income tax=%.2f",sal*0);
	else if(sal<=300000 && sal>=150000)
	printf("\n income tax=%.2f",sal*0.20);
	else if(sal>300000)
	printf("\n incime tax=%.2f",sal*0.30);
}
