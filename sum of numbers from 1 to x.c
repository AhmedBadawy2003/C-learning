#include <stdio.h>
#include <stdlib.h>

int main()
{
int x,i,sum=0;
printf("please enter your number:\n");
scanf("%d",&x);
for(i=1;i<=x;i++){
    sum=sum+i;

}
printf("the sum of numbers from 1 to %d:%d\n",x,sum);

    return 0;
}
