/*
 ============================================================================
 Name        : H3_A_EX5.c
 Author      : yahya
 Version     :
 Copyright   : Your copyright notice
 Description : EX5: C Program to Searchan element in Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float arr[20], x;
	int i,n;
	printf("Enter no of elements :");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{printf("Enter the element number %d:\n",i+1);
	fflush(stdin);  fflush(stdout);
	scanf("%f",&arr[i]);
	}
	printf("Enter the elements to be searched :\n");
	fflush(stdin);  fflush(stdout);
		scanf("%f",&x);
		i=0;
	while(i<n && x!=arr[i])
	{i++;}
	if(i<n)
		printf("Number found at the location =%d\n",i+1);
	else
		printf("Number not found \n");
	return 0;

	}
