/*
 ============================================================================
 Name        : H3_A_EX1.c
 Author      : yahya
 Version     :
 Copyright   : Your copyright notice
 Description : EX1: Example of Multidimensional Array In C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float arr_1[2][2], arr_2[2][2], arr_3[2][2];
	int i, j;
	printf("Enter the elements of 1st matrix\n");
	for(i=0;i<2;++i)
	{ for(j=0;j<2;++j)
	{printf("Enter arr_1[%d][%d]\n",i+1,j+1);
	fflush(stdin);  fflush(stdout);
	scanf("%f",&arr_1[i][j]);
	}
	}
	printf("Enter the elements of 2nd matrix\n");
	for(i=0;i<2;++i)
	{ for(j=0;j<2;++j)
	{printf("Enter arr_2[%d][%d]\n",i+1,j+1);
	fflush(stdin);  fflush(stdout);
	scanf("%f",&arr_2[i][j]);
	}
	}
	for(i=0;i<2;++i)
	{ for(j=0;j<2;++j)
	{arr_3[i][j]=arr_1[i][j]+arr_2[i][j];
	}
	}
	printf("Sum Of Matrix:\n");
	for(i=0;i<2;++i)
	{ for(j=0;j<2;++j)
	{printf("%0.2f \t",arr_3[i][j]);
	if(j==1)
		printf("\n");
	}
	}

	return 0;
}
