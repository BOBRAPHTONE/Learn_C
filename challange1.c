/* ---------- challange 1----------------------
*A programme for printing all ASCII characters in a table format
*Progamme written by Bob Afwata
*Date 16/8/2017
*/

#include<stdio.h>
//Functtion prototypes

int main(int argc ,char *argv[])
 {

   int i =0; // initialise an integer to be used as an index to zero
   char c ; //character 
   for(i = 0;i<=255;i++)
      {
        printf(" Characters  Decimal hexadecimal  Octal \n ");
        printf(" %c    %d    %x     %o \n",i,i,i,i); //converting to ascii and formatting \n prints to new line
      }

    return 0;
 }



