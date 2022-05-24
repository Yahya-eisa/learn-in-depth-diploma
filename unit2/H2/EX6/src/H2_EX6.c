/*
 ============================================================================
 Name        : H2_EX6.c
 Author      : yahya
 Version     :
 Copyright   : Your copyright notice
 Description :EX6: C Program to Calculate Sum of Natural Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,i,sum;
	printf("Enter an integer: \n");
		fflush(stdin);  fflush(stdout);
		scanf("%d",&a);
		sum=0;
		for (i=0;i<=a;i++)
			sum+=i;
		printf("Sum = %d ",sum);
}
