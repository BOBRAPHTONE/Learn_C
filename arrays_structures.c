/*

 Programme to explain the concept of arrays and structures 
 and how they are related
 The concpet of array of strcture variables is introduced and used to edit empoyee data in a company
 Progarmme written by Bob Afwata
 Date 27 /8/2017

 This introduces structures in one way and uses the .operator ...the new keyword typedef is used also

*/


#include<stdio.h>
#include<string.h>


typedef struct Company{


   char name[10];
   int number_of_employees;
   char location[10];
   char phone_numer[15]; //corporate phone numeber starting with country code ie +254xxxxx


};


typedef struct employee{

   char f_name[5];
   char s_name[5];
   double salary;
   char gender[5]; //male or female
   char department[10];
   char phone_number[15]; //corporate phone numeber starting with country code ie +254xxxxx


};



void add_employee(struct employee new_employee);
void print_employee_info(struct employee new_employee);


int main(int argc ,char *argv[])
{
  Company mycompany = {"BRCK",50,"Kilimani","+2568929931"};

  empoyee new_employee = { "Bob","Afwata",60000,"Male","Product","+254710854823"}; 


  add_employee(new_employee);
  print_employee_info(new_employee);


    return 0 ;
}


void add_employee(struct employee new_employee)
{

    new_employee.f_name[] = "Raphtone";
    new_employee.s_name []= "Opinde";
    new_employee.salary = 125000;
    new_employee.gender[] = "Male";
    new_employee.department[] = "Product ";
    new_employee.phone_number[] = "+2547108356920"


}


void print_employee_info(struct employee new_employee)
{

    ("The new employee  first ane is  %s \n",new_employee.f_name);
    ("And his second name is %s \n" ,new_employee.s_name);
    ("Starting salary is %d \n ",new_employee.salary); 
    ("Gender %s : \n" ,new_employee.gender);
    ("And department assigned is %s \n",new_employee.department );
    ("Phone numeber is %s \n" ,new_employee.phone_number);


}