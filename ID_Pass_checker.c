#include <stdlib.h>
#include <stdio.h>
const int id=1234;
const int pass=5678;
int x,y;
void main() {
printf("Please Enter Your ID:\n");
scanf("%d",&x);
if(x==id)
{
        printf("The ID is Correct\n Please Enter your Password!\n");
        scanf("%d",&y);


if(y==pass)
        {
        printf("Password is Correct Welcome ya m3lm! \n");
        }

else
        {
        printf("Incorrect PassWord!\n");
        }
}
else
        {
        printf("Incorrect ID\n");
        }




}
