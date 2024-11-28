#include <stdio.h>
#include <stdlib.h>

int main()
{
int x,y,z,a,m;

printf("please enter the two numbers:");
scanf("%d %d",&x,&y);
z=x%10;
a=y%10;

m=z+a;

printf("the sum of the last digit of these two numbers is:%d",m);



    return 0;
}
