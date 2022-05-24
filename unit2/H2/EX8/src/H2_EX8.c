/*
 ============================================================================
 Name        : H2_EX8.c
 Author      : yahya
 Version     :
 Copyright   : Your copyright notice
 Description : EX8: C Program to Make a Simple Calculator to Add, Subtract,
                Multiply or Divide Using switch...case
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a;    float x,y,z;
	printf("Enter operator either + or - or * or / : \n");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&a);
	printf("Enter two operands: \n");
	fflush(stdin);  fflush(stdout);
	scanf("%f %f",&x,&y);
	switch(a){
	case '+':
		z=x+y;
		printf("%.2f + %.2f = %.2f",x,y,z);
		break;
	case '-':
		z=x-y;
		printf("%.2f - %.2f = %.2f",x,y,z);
		break;
	case '*':
		z=x*y;
		printf("%.2f * %.2f = %.2f",x,y,z);
		break;
	case '/':
		z=x/y;
		printf("%.2f / %.2f = %.2f",x,y,z);
		break;
	default:
		printf("error!!!");
		break;
	}





}
