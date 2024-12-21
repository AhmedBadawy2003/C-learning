#include <stdio.h>
#include <stdlib.h>


void main(){
int x ;
printf("please enter the number:\n");
scanf("%d",&x);
int z=x,sum=0;
 while (x >0){

 printf("%d*%d= %d\n",z,x,z*x);
sum+=z*x;

 x--;
 }
printf("factorial is:%d\n",sum);
}

