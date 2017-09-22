#include <stdio.h>
//initialize student structure

 struct Student{
    char name[20];
    int age ;
    float weight;
    char Course[15];
    char grade;
    char unit[20];
};

//initialize lecturer structure
struct Lecturer{
    char name[20];
    float salary;
    char department[20];
    char unit[20];

};


int main(int argc ,char *argv[])
{

    struct Student first_student= {"Bob Afwata",25,68.5,"Electrical",'A',"Digital Electronics"}; //here we havent used the word struct
    struct Lecturer maths_lecturer ={"Daniel Ojwang",120000.35,"Maths Department ","Complex Numbers"}; //keyword struct used since Lecturer structure is not typedefined.
    //printf("The first student in the maths class is %s with a grade of %c\n",first_student.name,first_student.grade);
    printf("Please Enter student name :\n");
    scanf("%s",first_student.name);
    printf("PLease enter student course :\n");
    scanf("%s",first_student.Course);
    printf("===========Student Information===========\n");
    printf("Student Name   : %s\n",first_student.name);
    printf("Student Course :%s\n\n",first_student.Course);
    printf("==========Lectures Information=============\n");
    printf("Name    :%s\n",maths_lecturer.name);
    printf("Salary  :%f\n",maths_lecturer.salary);
    printf("Depart  :%s\n",maths_lecturer.department);
    printf("Unit    :%s\n",maths_lecturer.unit);
    return 0;
}

/*
void admit_student(struct Student){



}

*/