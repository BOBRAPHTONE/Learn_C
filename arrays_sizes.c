#include<stdio.h>


int main(int argc ,char argv[])
{
    //array of integers
    int areas[5] = {10,20,24,36,16}; //this is an array of 5 integers.

    //array of characters
    char names[] = "Bob Afwata";
    char full_name[] = {'B','o','b','A','f','w','a','t','a'};
    printf("The size of an int         : %u\n",sizeof(int));
    printf("The size of areas areas[]  :%u\n",sizeof(areas));
    printf("The number of ints in areas:%u\n",sizeof(areas)/sizeof(int));
    printf("The first area is %d , the second area is %d\n",areas[0],areas[1]);
    printf("The size of a char :%u\n",sizeof(char));
    printf("The size of char array  full name[]: %u\n",sizeof(full_name));
    printf("The number of characters  : %u\n",sizeof(full_name)/sizeof(char));

    printf("Name = \"%s\" and full name is \"%s\"\n",names,full_name);
    
    return 0;


}