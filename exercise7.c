/* Exercise 7 ======================================================
 * This is a programme that evaluates emplyees in a company based on
 *    (i) The number of lines of code they publish on github daily
 *    (ii) Their skills in c
 *    (iii) The numer of  useful hours they spend in the office
 *   Programme written by : Bob Afwata
 *   Date 28 /August 2017
 *===================================================================
*/
#include<stdio.h>
#include<string.h> //string library for manipulating strings




typedef struct { 
    
    //char company_name[] = "BRCK";

    int employees; //numer of emplyees

    char *phy_location ; //physical location ,bulding ,road ,city etc

    double networth ; //companys networth in US dollars


}Company;



typedef struct { 
    
    //char company_name[] = "BRCK";

    int employees; //numer of emplyees

    char *phy_location ; //physical location ,bulding ,road ,city etc

    double networth ; //companys networth in US dollars


}employees;


/* funtion prototypes */
void edit_details(void);
int update_salary(int salary);
void register_company(Company company);
void deregister_company(Company company);
void update_employees(employees new_employee);


int main(void)
{


    //programme that displays my information ,my names,age ,company I worked in ,Country county etc
    int age =25; // my age in years
    char first_name[] = "Bob"; //my first and second names and gender
    char second_name[] ="Afwata";
    char gender[] ="Male";
    printf("Hello World \n\n" );
    printf("My Name is : %s %s \n",first_name,second_name);
    printf("I am %d years old \n",age);


    int distance = 100;
    float power =1.245f;
    double super_power = 589359.34257;
    char initial = 'B';
    char second_initial ='R';  //the initaials of mys second name 
    char school[] = "Kenyatta University"; //the name of the university I went to
    char country[]= "Kenya"; //my lovely country Kenya
    char county[]  = "Nairobi"; //The baustiful city ..our capital where i also happen to live in
    char company[] = "BRCK"; //my company ...BRCK
    char course[] = "Electrical and aealectronics Engineering";  //the amazing course I persued in Campus

    printf("I live %d miles away from my work place %s \n",distance,company);
    printf("The required level of power is %f \n\n",power);
    printf("%c is the first character of my name and %c is the second \n",initial,second_initial);
    printf("I studied at %s in %s ,%s ,a course in %s \n",school,county,country,course);


    char hobby1[] = " Playing with Electronics";
    char hobby2[] = "Watching Documentaries and SciFi";
    char hobby3[] = "Travelling";
    double salary = 125000.025;
    printf("My hobbies include %s ,%s and %s while my target salary sometime next year would be %2f \n",hobby1,hobby2,hobby3,salary);


    edit_details();

   return 0; //this is required for a c programme

}


//funtions 

void edit_details(){

    char detective1[] = "James  Gordon " , detective2[] = " Harvey Bullock" , movie[]= "Gotham "; //the names of my favourite movie characters
    char university[] = "Delaware State University"; //God willing the Univiersity I may be chosen to do a masters programmes

    char masters_programme [] = "Electrical and Computer Science "; //still my dream course at Caltech 

    int age = 28; //oops am getting old in 3 years time


    char city[] = "Accra" , country[] ="Ghana";  //West Africa ,Capital and best country I wold love to visit

    printf("========================================================================================\n\n");


    printf("In few years time I would love to visit %s in %s \n\n",city,country); //preinting continues

    printf("I am praying for Gods Opportunity to study %s in %s \n",masters_programme ,university);

    printf("The names of my favorite detectives in %s movie are %s and %s \n",movie,detective1,detective2);
    printf("========================================================================================\n\n");



}



    int typing_speed = 0 ; //my typing speed in words per minute
    double new_salary ; //God willing my new salary in kshs
    double old_salary; //my old slary also in kshs
    int skill_in_c;  //my own honest evaluation of skill
    int chapter ; //the chapter of the book i have done
    int lines_of_code ; //numer of lines of code i write per day //target is 300 new lines of code ;150 source and 150 header
    char feedback[5] = "" ;

int update_salary(int salary){
    char employee[] = " ";
    printf("Please enter employee name ");
    scanf(" %s ",&employee);
    printf("Please give a honest evaluation of his or her skills in C  out of 100 percent ");
    scanf("%d",&skill_in_c);
    printf("How many lines of code does he or she push to git on a daily basis");
    scanf("%d",&lines_of_code);
    printf("Are you impressed with his or her indentation style  Yes or No");
    scanf(" %s ", &feedback);

    int typing_speed =0 ;
        if((typing_speed >= 60 ) && (skill_in_c >= 75))
        {

             printf("Good work %s you deserve an increment in salary ",employee);

        }
        else if ((typing_speed <= 50 ) && (skill_in_c <= 50 ))
        {
            printf("Good effort %s but you need to work harder",employee);

        }
        else
        {

            printf("Still very poor please put more effort %s You can do this ..all the best ",employee);

        }




}




//Company mycompany;






