/**********************************************************
* Funtions in C -A preogramme that displays a list of maximum and minimum 
 Numbers , avreage ,by using funtions and arrays
*
* The concept of pointers are also intoduced and used to
  Acees memebrs of an array
*
*
*
*
**********************************************************/

#include<stdio.h>

#define NUMBERS 1,3,45,67,3,57,42,8,5,12,2,68,1,78,46



//funtion prototypes

//funtion for getting maximum numer between x and y 
int max(int x,int y);
float avarage(void);

void print_pointer_address()

//funtion for swapping x and y  using pointers
void swap(int x ,int y);

int numbers[sizeof(numbers)] = { NUMBERS};

int *ptr; //pointer to an array of numbers 



int main (int argc ,char argv[])
{










    return 0;
}


//this is a funtion that calculates the maximum value between x and y
int max(int x, int y)
{
    int max;
    max = ((x) > y ? x :y);
    return max;

}


void swap(int x ,int y)

{




  return x; 

}