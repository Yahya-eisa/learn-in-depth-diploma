/*
 ============================================================================
 Name        : H3_A_EX4.c
 Author      : yahya
 Version     :
 Copyright   : Your copyright notice
 Description : EX4: C Program to Insert an element in an Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float arr[20], m;
	int i,n,o;
	printf("Enter no of elements :");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{printf("Enter the element number %d:\n",i+1);
	fflush(stdin);  fflush(stdout);
	scanf("%f",&arr[i]);
	}
	for(i=0;i<n;i++)
	{printf("%0.2f \t",arr[i]);
	}
	printf("\nEnter the location :\n");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&o);

	printf("Enter the element to be inserted :\n");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&m);
	n++;
	for(i=n;i>=o;i--)
	{arr[i]=arr[i-1];}
	arr[o-1]=m;
	for(i=0;i<n;i++)
	{printf("%0.2f \t",arr[i]);
	}
	return 0;
}
