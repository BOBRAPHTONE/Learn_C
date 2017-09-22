/* -----------------Challage2 ----------------------
* This programme takes in two inputs from the user
* Comapares the two numbers 
* Finally reorders the nubers between the two inputs in
* Ascending and Descending order and outputs to the screen
* Progamme written by Bob Afwata
* Date 16/8/2017
*/

#include<stdio.h>

//function prototypes
/* funtion for arranging numbers bewteen the two inputs in ascending order */

void print_ascending(int x ,int y);

/* funtion for arranging numbers in decsnding order */

void print_descending(int x ,int y);

/*funtion for comparing which of the two inputs are greater */

void which_is_greater(int x, int y);

//beginning of main funtion

int main(int argc ,char *argv[]){

   int a = 0; // first number
   int b = 0  ; //second number
 


/* capture input from user and store them in a and b respectively*/
   printf("Please enter the first number \n ");
   scanf("%d" ,&a);
   printf("Second Number \n");
   scanf("%d" ,&b);
   printf("Your numbers are :  %d ,%d \n",a,b);

  /* Calling the funtions thst compares the two numbers */

   which_is_greater(a,b);
 /* Calling the two funtions for ordering the numbers in ascending and descending order */
   print_ascending(a,b);
   printf("\n");
   print_descending(a,b);
    return 0;
 }

void which_is_greater(int x,int y){

 if(x>y) 
  {
      printf("first number is greater than second number\n");
     
  }
 else
   {
     printf("Second number is greater than first number \n");
     
   }

}
void print_ascending(int x ,int y){
   int i ,j;
   printf("Numbers in Ascending order is:\n");
   for (i =x ; i<=y ; i+1)
     {
       printf(" %d, ",i);
       i =i+1;

     }

}

void print_descending(int x, int y){

   int i,j;
   printf("Numbers in Descending order is :\n");
   for(i =y ;i>=x ;i-1)
    {
      printf("%d ,",i);
      i = i-1;
   }

}
vv