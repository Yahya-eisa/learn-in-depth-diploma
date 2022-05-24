/*
 ============================================================================
 Name        : H2_EX3.c
 Author      : yahya
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Find the Largest Number Among Three Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,i,u;
	printf("Enter three numbers:\n");
	fflush(stdin);  fflush(stdout);
	scanf("%f %f %f",&x,&i,&u);
	if(x>i && x>u)
		printf("%0.4f is Largest number\n",x);
	if(i>x && i>u)
		printf("%0.4f is Largest number\n",i);
	if(u>i && u>x)
		printf("%0.4f is Largest number\n",u);
}
