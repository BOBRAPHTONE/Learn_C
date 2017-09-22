/* Processing C strings
* Function that processes strings and outputs it'
*It requests the user to input a string ...his or her name
* and prints a messge concatinated with the name as a string
*
*/

#include <ctype.h>
#include <stdio.h>
#define MAXSTRING 100


int main(int argc ,char argv[])
{
    char c, name[MAXSTRING];
    int i, sum = 0;
    printf("Hi! Please enter your name \n");
    for (i = 0; (c = getchar()) != '\n'; ++i) 
    {
    name[i] = c;
    
   }
   name[i] = '\0';

   printf("Hello  %s  its nice to meet you \n",name);
//     for (i = 0;i<=(MAXSTRING-1); ++i) 
//     {
//       putchar(name[i]);
    
//    }
}
