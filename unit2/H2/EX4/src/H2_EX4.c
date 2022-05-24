/*
 ============================================================================
 Name        : H2_EX4.c
 Author      : yahya
 Version     :
 Copyright   : Your copyright notice
 Description : EX4: C Program to Check Whether a Number is Positive or Negative
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int z;
	printf("Enter your number:\n");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&z);
	if(z==0)
		printf("%d is zero",z);
	else if(z>0)
		printf("%d is positive",z);
	else if(z<0)
		printf("%d is negative",z);
	else
		printf("please enter the number");
}
