/*
 ============================================================================
 Name        : H3_A_EX2.c
 Author      : yahya
 Version     :
 Copyright   : Your copyright notice
 Description : EX2: C Program to Calculate Average Using Arrays
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float sum, average, arr[100];
	int i,x;
	printf("Enter the numbers of data:\n");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&x);
	sum=0;
	for(i=0;i<x;++i)
	{printf("%d:Enter the number of data:\n",i+1);
	fflush(stdin);  fflush(stdout);
	scanf("%f",&arr[i]);
	sum+=arr[i];
	}
	average=sum/x;
	printf("Average = %0.2f \n",average);


	return 0;
}
