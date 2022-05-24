/*
 ============================================================================
 Name        : HOME_WORK_1.c
 Author      : yahya
 Version     :
 Copyright   : Your copyright notice
 Description : C BASICS_1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("EX1: \n C Programming \n");
	printf("########################################################################\n");
	printf("EX2:\n enter your integer number \n");
	int a,b,c,e;
	fflush(stdin);  fflush(stdout);
	scanf("%d",&a);
	printf("You entered: %d  \n" ,a);
	printf("########################################################################\n");
	printf("EX3:\n enter your 2 integer numbers \n");
	fflush(stdin);  fflush(stdout);
	scanf("%d %d",&b,&c);
	e=b+c;
	printf("the sum equal :%d \n",e);
	printf("########################################################################\n");
	float d,f,g;
	printf("EX4:\n enter your 2 numbers \n");
	fflush(stdin);  fflush(stdout);
	scanf("%f %f",&d,&f);
	g=f*d;
	printf("the Product equal :%f \n",g);
	printf("########################################################################\n");
	char h;
	printf("EX5:\n Enter a character: \n");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&h);
	printf("ASCII value of %c= %d\n",h,h);
	printf("########################################################################\n");
	float i,j,k;
	printf("EX6:\n Enter the value of a \n");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&i);
	printf(" Enter the value of b \n");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&j);
	k=i; i=j ;j=k;
	printf("After swapping, value of a = %f \n After swapping, value of b = %f \n",i,j);
	printf("########################################################################\n Swap Two Numbers without temp variable \n");
	float l,m;
	printf("EX6:\n Enter the value of a \n");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&l);
	printf(" Enter the value of b \n");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&m);
	l=m+l ;   m=l-m;   l=l-m;
	printf("After swapping, value of a = %f \n After swapping, value of b = %f \n",l,m);
	printf("########################################################################\n########################################################################\n");
	return 0;
}

