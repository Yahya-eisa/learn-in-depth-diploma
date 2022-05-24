/*
 ============================================================================
 Name        : h2_ex2.c
 Author      : yahya
 Version     :
 Copyright   : Your copyright notice
 Description : EX2: C Program to Check Vowel or Consonant
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//Alphabets a, e,i,o and u are known as vowels
	char x;
	printf("Enter an alphabet:\n");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&x);
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
		printf("%c is a vowel\n",x);
	else
		printf("%c is a consonant\n",x);

	return 0;

}
