#include <stdio.h>
#include <stdlib.h>
int prime(int n);
int main()
{
int x,y,f,j;

printf("Enter two numbers ( intervals ) :\n");
scanf("%d %d",&x,&y);
printf("Prime numbers between %d and %d are:\n ", x, y);
   for (f=x+1;f< y;f++) {
        j=prime(f);
   if(j==1)
   {printf("%d\t",f);
}
}
return 0;
}
int prime(int n)
{
int i, j=1;
for(i=2;i<=n/2;i++)
{
    if(n%i==0)
    {    j=0;
        break;
        }
}
return j;
}


