/*
 ============================================================================
 Name        : H2_EX7.c
 Author      : yahya
 Version     :
 Copyright   : Your copyright notice
 Description : EX7: C Program to Find Factorial of a Number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,i,fact;
	printf("Enter an integer: \n");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&a);
	fact=1;
	if(a>0)
	{for (i=1;i<=a;i++)
		fact*=i;
	printf("Factorial = %d ",fact);}
	else if(a<0)
		printf("Error!!! Factorial of negative number doesn't exist");
	else if(a==0)
		printf("factorial of 0 = 1");
	else
		printf("please enter the number");

}
