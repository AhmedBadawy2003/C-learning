#include <stdio.h>
#include <stdlib.h>
#include "factorial.h"


int main()
{
int x;

printf("This progam calculates the factorial of numbers!\nPlease Enter your number:\n");
scanf("%d",&x);

x=factorial(x);

printf("factorial = %d\n",x);

    return 0;

}



