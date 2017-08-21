/* The first challage question 
*
*Printing all ASCII characters in a table format
*Progamme written by Bob Afwata
*Date 16/8/2017
*/

#include<stdio.h>
//function prototypes

void print_ascending(int x ,int y);
void print_descending(int x ,int y);
void which_is_greater(int x, int y);
void squares(int x ,int y);
void cubes(int x ,int y);
int main(int argc ,char *argv[])
 {

   int a = 0; // first number
   int b = 0  ; //second number
 


/* capture input from user and store them in a and b respectively*/
   printf("Please enter the first number \n ");
   scanf("%d" ,&a);
   printf("Second Number \n");
   scanf("%d" ,&b);
   printf("Your numbers are :  %d ,%d \n",a,b);
   which_is_greater(a,b);
   print_ascending(a,b);
   print_descending(a,b);
    return 0;
 }

void which_is_greater(int x,int y)
{

 if(x>y) 
    {
      printf("first number is greater than second number\n");
     
    }
 else
    {
     printf("Second number is greater than first number \n");
     
    }

}
void print_ascending(int x ,int y)
{
   int i ,j;
   printf("Numbers in Ascending order is:\n");
   for (i =x ; i<=y ; i+1)
      {
       printf(" %d, ",i);
       i =i+1;

     }

}

void print_descending(int x, int y)
{

   int i,j;
   printf("Numbers in Descending order is :\n");
   for(i =y ;i>=x ;i-1)
    {
      printf("%d ,",i);
      i = i-1;
   }

}

void squares(int x )
{



}

