#include <stdio.h>
#include <stdlib.h>

int main()
{
int x,y,add,sub,mult;
float div;

printf("this program calculates the sum, difference,multiplication and division of two numbers!\n");
printf("please enter the two numbers:\n");

scanf("%d %d",&x,&y);

add=x+y;
sub=x-y;
mult=x*y;
div=(float)x/y;

printf("%d+%d=%d\n",x,y,add);
printf("%d-%d=%d\n",x,y,sub);
printf("%d*%d=%d\n",x,y,mult);
printf("%d/%d=%.2f\n",x,y,div);


    return 0;
}

