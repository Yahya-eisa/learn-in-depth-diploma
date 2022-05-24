/*
 ============================================================================
 Name        : h2_ex1.c
 Author      : yahya
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Check Whether a Number is Even or Odd
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	printf("Enter an integer you want to check:\n");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&a);
	if((a%2)==0)
		printf("%d is even\n",a);
	else
		printf("%d is odd\n",a);

	return 0;
}
