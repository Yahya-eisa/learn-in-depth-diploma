#include <stdio.h>
#include <stdlib.h>
int fact(int f);
int main() {
    int f;
printf("Enter an positive integer: \n");
scanf( "%d",&f);

printf("Factorial of %d = %d\n",f,fact(f) );


 return 0;
}


int fact(int f)
{int i,y=1;
    for(i=1;i<=f;i++)
        {y*=i;}

return y ;

}
