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

printf("X+Y=%d\n",add);
printf("X-Y=%d\n",sub);
printf("X*Y=%d\n",mult);
printf("X/Y=%.2f\n",div);


    return 0;
}
