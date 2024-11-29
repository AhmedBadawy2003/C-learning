#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x,y;
    printf("please enter:");
    scanf("%c",&x);

    y=(int)x;

     if(y>=48 && y<=57){
        printf("Number:%c",x);

    }
    else if(y>=65 && y<=90){
        printf("Upper-case ALPHA:%c",x);

    }
    else if(y>=97 && y<=122){
        printf("Lower-case ALpha:%c",x);

    }




return 0;
}

