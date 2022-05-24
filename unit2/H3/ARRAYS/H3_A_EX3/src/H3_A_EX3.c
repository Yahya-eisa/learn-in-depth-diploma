/*
 ============================================================================
 Name        : H3_A_EX3.c
 Author      : yahya
 Version     :
 Copyright   : Your copyright notice
 Description : EX3: C Program to Find Transpose of a Matrix
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float arr[10][10], trans[10][10];
	int i, j, k, l;
	printf("Enter rows and column of matrix:\n");
	fflush(stdin);  fflush(stdout);
	scanf("%d %d",&i,&j);
	for(k=0;k<i;++k)
	{ for(l=0;l<j;++l)
	{printf("Enter arr[%d][%d]\n",k+1,l+1);
	fflush(stdin);  fflush(stdout);
	scanf("%f",&arr[k][l]);
	}
	}
	printf("Entered Matrix:\n");
	for(k=0;k<i;++k)
	{ for(l=0;l<j;++l)
	{printf("%0.2f\t",arr[k][l]);
	if(l==j-1)
		printf("\n");
	}
	}
	printf("\n");


	for(k=0;k<i;++k)
	{ for(l=0;l<j;++l)
		trans[l][k]=arr[k][l];
	}

	printf("Transpose of Matrix:\n");

	for(k=0;k<j;++k)
	{ for(l=0;l<i;++l)
	{printf("%0.2f\t",trans[k][l]);
	if(l==i-1)
		printf("\n");}


	}
	return 0;
}
