#include<stdio.h>

int main(int argc ,char *argv[]){



    float temperature = 26.60;
    char name[15] = "Bob afwata"; //may name
    int age = 25; //my age in years
    if(age > 30 ){
        printf("%s You are older than 30 years old \n\n",name);
    }else if (age > 20)
    {
        printf("%s You are older than 20 years ..You are getting old haha\n\n",name);
    }else{
        printf("%s You are still very young a teeneger I suppose\n\n",name);
    }

    return 0;
}