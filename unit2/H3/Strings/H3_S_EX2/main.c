#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int main()
{

	char g[100];
	int i;

	printf("Enter a string:\n");
	gets(g);
	for(i=0;g[i]!='\0';i++);

		printf("Length of string:%d\n",i);

    return 0;
}
