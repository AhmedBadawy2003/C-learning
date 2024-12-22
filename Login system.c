#include <stdio.h>
#include <stdlib.h>

const int ahmed_pass=1234,mohamed_pass=5678,noha_pass=1357,ahmed_id=2003,mohamed_id=1999,noha_id=2004;



void main(){
int x,y,z;

printf("please enter your ID:\n");
scanf("%d",&x);
switch(x){

case 2003:
for(int i=1;i<4;i++){
    printf("please Enter your password\n");
    scanf("%d",&y);
    if(y==1234){
        printf("Welcome Ahmed\n");
break;    }
    else if(y!=1234 && i<3)
{
        printf("please try again\n");
}
else {
        printf("No more tries\n");
break;

}
}
break;


case 1999:
for(int i=1;i<4;i++){
    printf("please Enter your password\n");
    scanf("%d",&y);
    if(y==5678){
        printf("Welcome Mohamed\n");
break;    }
    else if(y!=5678&& i<3)
{
        printf("please try again\n");
}
else {
        printf("No more tries\n");
break;

}
}
break;


case 2004:
for(int i=1;i<4;i++){
    printf("please Enter your password\n");
    scanf("%d",&y);
    if(y==1357){
        printf("Welcome Noha\n");
break;    }
    else if(y!=1357&& i<3)
{
        printf("please try again\n");
}
else {
        printf("No more tries\n");
break;

}
}
break;

default: printf("Incorrect ID\n");break;


}

}
