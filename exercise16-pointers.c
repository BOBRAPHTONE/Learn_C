/**
  *************************************************
  * Exercise 16 - Structures and Pointers in C
  *************************************************
  * */
#include <stdio.h>

// fuction prototypes


void update_details(void);
void free_person(void);
// Initializing a person struct
struct Person
{
    int age ;
    char *fname_name;
    float hieght;
    float weight;

};

struct Person *Person_create(int age,char *first_name,char *second_name,float hieght,float weight){
    struct Person *person2 = malloc(sizeof(struct Person)) ;//initializing struct person
    assert(person1 !=NULL);
    person2->age=age;
    person2->first_name=first_name;
    person2->second_name=second_name;
    person2->hieght =hieght; //hieght in cm
    person2->weight = weight; //weight in killograms


    return person1;
}

    // Person person2

    // person2->age=24;
    // person2->first_name="Bob";
    // person2->second_name="Afwata";
    // person2->hieght =76.4; //hieght in cm
    // person2->weight = 68.5; //weight in killograms



int main(int argc,char *argv[]){


      printf("Example project on Pointers and Structures");

      return 0;


}

void update_details(void){

 

}

void free_person(void){







}