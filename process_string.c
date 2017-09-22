/* Processing C strings*/
#include <ctype.h>
#include <stdio.h>
#define MAXSTRING 100

 void process_str();
int main(int argc ,char argv[])
{
    process_str();
}

void process_str()
{


    char c, name[MAXSTRING];
    int i = 0;
    for (i = 0; (c = getchar()) != '\n'; ++i) 
    {
       name[i] = c;
    
    }
       name[i] = '\0';

       printf("%s",name);


}