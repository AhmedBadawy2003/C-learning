#include <stdio.h>
#include <stdlib.h>

int main()
{
double x,y,z ;
printf("please enter the three numbers \n");
scanf("%lf %lf %lf",&x,&y,&z);

if(x>y &&x>z){
    printf("%0.2lf is the biggest number\n",x);
}
if(y>x &&y>z){
    printf("%0.2lf is the biggest number\n",y);
}
if(z>x &&y<z){
    printf("%0.2lf is the biggest number\n",z);
}




    return 0;
}
