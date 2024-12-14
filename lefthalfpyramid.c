#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i,y,l;
    printf("please enter the height of the pyramid:\n");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
{
     for(l=1;l+i<=x;l++)
{
    printf(" ");

}
    for(y=1;y<=i;y++)
{
    printf("*");

}

    printf("\n");
}
    return 0;
}
