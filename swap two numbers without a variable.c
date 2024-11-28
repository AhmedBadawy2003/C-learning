/***** Write a program to swap two numbers wtihout using a temporary variable****/
/*****        name: ahmed mohamed badawy , date: 28/11/2024                  ****/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int x=5,y=3;
printf("x=%d ,y=%d\n",x,y);

x=x+y;
y=x-y;
x=x-y;

printf("x=%d ,y=%d \n",x,y);


    return 0;
}
