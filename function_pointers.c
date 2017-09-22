/* Funtion pointers -aprogramme that explains the concept
of Pointers to funtions 
*/

#include <stdio.h>
//first funtion
void print_name()
{
    printf("My name is Bob Afwata");

}
//second funtion that calls the second funtion
void call_name(void (*ptr)())
{

    ptr(); //using this funtion to call the funtion you need.
}


int main(int argc ,char argv[])
{


    void (*ptr)() = print_name;  //declare  a funtion pointer
    call_name(ptr);

    return 0;
}