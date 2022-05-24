/*
 ============================================================================
 Name        : H3_S_EX3.c
 Author      : yahya
 Version     :
 Copyright   : Your copyright notice
 Description : EX3: C Program to Reverse String Without Using Library Function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int main() {
	char g[100];
		int i,len;

		printf("Enter a string:\n");
		gets(g);
		len=strlen(g)-1;
		for(i=len;i>=0;i--)
			printf("%c",g[i]);
		return 0;

}
