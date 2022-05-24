/*
 ============================================================================
 Name        : H3_S_EX2.c
 Author      : yahya
 Version     :
 Copyright   : Your copyright notice
 Description : EX2: C Program to Find the Length of a String
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int main(void) {
	char g[100];
	int i,len;
	len=0;
	printf("Enter a string:\n");
	gets(g);
	for(i=0;g[i]!='\0';i++)
	{
		len+=i;
	}
		printf("Length of string:%d\n",len);
		return 0;
}
