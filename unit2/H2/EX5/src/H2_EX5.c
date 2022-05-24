/*
 ============================================================================
 Name        : H2_EX5.c
 Author      : yahya
 Version     :
 Copyright   : Your copyright notice
 Description : EX5: C Program to Check Whether a Character is an Alphabet or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char q;
	printf("Enter a character:\n");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&q);
	if((q>='a' && q<='z')||(q>='A' && q<='Z'))
		printf("%c is an alphabet",q);
	else
		printf("%c is  not an alphabet",q);
	return 0;
}
