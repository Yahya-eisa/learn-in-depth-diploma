#include <stdio.h>
#include <stdlib.h>
int power(int n,int p);
int main()
{int n,p;
    printf("Enter base number:\n");
    fflush(stdin); fflush(stdout);
    scanf("%d",&n);
    printf("Enter power number(positive integer):\n");
    scanf("%d",&p);
    printf("%d ^ %d = %d\n",n,p,power(n, p));
    return 0;
}
int power(int n,int p)
{
    int i,y=1;
    for(i=1;i<=p;i++)
    {
        y*=n;
    }
    return y;
}
