#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000], x;
		int i;
		int c=0;
		printf("Enter a string:\n");
		fgets(s, sizeof(s), stdin);
		printf("Enter a character to find frequency: \n");
		fflush(stdin);  fflush(stdout);
		scanf("%c",&x);
		for(i=0;s[i]!='\0';i++)
		{if(x==s[i])
			c++;
		}
		printf("Frequency of %c =%d\n",x,c);

    return 0;
}
