#include <stdio.h>
#include <string.h>
#include "headers.h"

int main(void){
    Student s1 = {
        .name = "John",
        .course = "Computer Science",
        .department = "Science"
    };
    Module m1 = {
        .name = "1870 MATH",
        .credits = 4
    };
    Enrolment e1 = enrolStudent(s1,m1);
    assignGrade(&e1, 98);
    studentGrade(e1);


    return 0;
}