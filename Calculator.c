#include <stdio.h>
#include <stdlib.h>

int main()
{
char c;
double x,y ;
printf("please enter the operator\n");
scanf("%c",&c);

printf("please enter your two numbers:\n");
scanf("%lf%lf",&x,&y);

switch(c){

case '+' :

printf("%0.2lf+%0.2lf=%0.2lf\n",x,y,x+y);
    break;
case '-' :

printf("%0.2lf-%0.2lf=%0.2lf\n",x,y,x-y);
    break;

    case '*' :

printf("%0.2lf*%0.2lf=%0.2lf\n",x,y,x*y);
    break;

    case '/' :
if(y!=0){


printf("%0.2lf/%0.2lf=%0.2lf\n",x,y,x/y);
}
else{
    printf("mathematical error\n");

}
break;
    default:
        printf("invalid operator!\n");
        
}
return 0;
}

