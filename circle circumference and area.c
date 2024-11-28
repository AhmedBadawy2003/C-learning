#include <stdio.h>
#include <stdlib.h>

int main()
{
float x,area,circumference;

   printf("This program finds the area and circumference of a circle!\n");
   printf("please enter the radius of the circle!\n");

   scanf("%f",&x);
   printf("your radius is:%0.2f\n",x);

circumference=2*3.14*x;
area=3.14*(x*x);

printf("The circumference is :%f  , The area is :%f ",circumference,area);

    return 0;
}
