#include<stdio.h>


///funtion for displaying users name
void print_name();
//funtion for displaying his or her age
void print_age();
//prototype of funtion pointer
void print_name_ptr(void (*ptr)());

int main(int argc ,char *argv[]){
    //declare a funtion pointer ..a new funtion pointer.
    //it takes no parameter hence () and returns void
    void (*p)() =  print_name; //here we declare and set it to one of the funtions
    //then call it
    print_name_ptr(print_name);
    return 0;
}


void print_name(){
    char name[] ="Bob Afwata";
    printf("Your name is %s \n",name);
}


void print_age(){
    int age = 25;
    printf("You are %d years old",age);
}
//funtion  that takes another funtion pointer as a parameter
void print_name_ptr(void (*ptr)()){
    ptr(); //calling of a funtion using the other prototype funtion 
    //call back  the funtion that it points to

}