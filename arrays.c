#include<stdio.h>
char first_name[10]  = "Bob"; //array of characters ...strings
char second_name[10] = "Afwata";




int main(int argc,char *argv[]){
    int numbers[7] ={1,2,4,5,6,56,7};
    char name[6] = {'a','f','w','a','t','a'};

    //first_name[10] = "Bob";
    //second_name[10]= "Afwata";
    printf(" Numbers are : %d %d %d %d\n ",numbers[0],numbers[3],numbers[5],numbers[1]);
    printf("My full names are %s %s\n",first_name,second_name);
    int i = 0;
    for(i = 0; i<sizeof(name); i++){
        printf("%c\t",name[i]);
    }
    return 0;
}