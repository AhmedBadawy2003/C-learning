/*********************
 data types by: Ahmed Mohamed Badawy
Date: 27/11/2024
**********************/


#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;                /*** integer decleration                         ***/
signed int v ;       /*** both negative and positive values            ***/
unsigned int c ;    /*** only 0 and positive values for the integer    ***/
c= 90u ;           /***  the u is a suffix literal "u is for unsigned" ***/

/*** to scan or print out an integer data type %d is used ***/

printf("please enter the desired decimal number:\n");
scanf("%d",&v);

printf("the decimal number is :%d\n",v);

/********************************************************************************************/

// first lets look at how hexadecimal work in correlation to decimal numbers

// hexadecimal numbers are : 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , A ,  B , C , D ,  E  , F
// decimal numbers are     : 0 , 1 , 2 , 3 , 4,  5 , 6 , 7 , 8 , 9 , 10 , 11, 12, 13 , 14 , 15

// CF in hexadecimal equals  12*16^1 + 15*16^0  in decimals

/*** to scan or read hexadecimal numbers   ***/

// hexadecimal literal is 0X or 0x


unsigned int k = 0X1A4 ;  // a hexadecimal is decalred

unsigned int j;
 printf("please enter the desired hexadecimal number:\n");

scanf("%X",&j); // the X is a format specifier for the hexadecimal number it can be typed x so the hexa number is small orX to output a


printf("Your Hexadecimal number is :%X\n",j);

/*************************************************************************/

//float numbers:
//              float numbers are fraction numbers  " 12 is an integer 12.3 is a float"
//              float format specifier is &f
/*              float suffix literal             -if i have a float with the value 3.1426
                                                 - 3.1426f     "legal"
                                                 - 3.1426F     "legal
                                                 - 31426e-1    "legal"
                                                 -31426E-1     "legal"

/***** to to accept a float as an input ******/
float decimal ;
printf("please enter the desired float number:\n");
scanf("%f",&decimal);
printf("the float number you entered is : %0.2f\n",decimal);        // 0.2f to get the nearest digit in hundredth

// decimal numbers can also be defined as double "15 decimal places" and long double "19 decimal places"



/*************************************************************************************/

//characters
//            char is a single input variables that reads a single character
//            char literal  are ''
//            char format specifier is c

/******** to accept and print a character *********/

char character ;
 printf("please enter the desired character:\n");
 scanf(" %c",&character); // Notice the space before %c its a must because the format specifier %c can read the \n because it was already buffered so it will just go to anew line and wouldnt read the character
 printf("the desired character was: %c\n",character);


char h='f';
printf("%c\n",h);


/*************************************************************************************/
 //strings
//        strings are a bit complicated as they are considered a character array and they use pointers
//        there is a specific problem with taking a string as an input with an array as it stops reading input after pressing space so it only takes a single word
//        to fix such problem  two functions can be used gets which is not recommended as it can result in overflow and fgets which is suitable for multiwords

 char ahmed[100];

 printf("please enter your name:");

 fgets(ahmed,sizeof(ahmed),stdin);

 printf("the users name is :%s",ahmed);







    return 0;
}
