#include<stdio.h>


int main(int argc ,char *argv[]){

   int i = 0;
   for(i =1 ;i <argc ;i++){
       printf("arg %d :%s \n",i,argv[i]);
   }

   char *states[] ={"Carlifonia","New york","Texas","Oregon","Dallas","Delaware"};
   char *friends[] ={"Arthur","Alfred","Maggie","Benard","Martin","Jane"};
   int num_states = 7;//sizeof(states) ;//number of ststes
   for (i=0; i<num_states; i++){
       //printf("State %d : %s \n",i,states[i]);
       printf("%s lives in the city of %s \t\n ",friends[i],states[i]);
   }
3

 
    return 0;
}