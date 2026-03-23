#include <stdio.h>
#include <string.h>
#include "headers.h"

Enrolment enrolStudent(Student s, Module m){
    Enrolment enrol;
    enrol.s = s;
    enrol.m = m;

    return enrol;
}

void assignGrade(Enrolment *e,int newgrade){
    e->grade = newgrade;
}
void studentGrade(Enrolment e){
    printf("Student name: %s\n", e.s.name);
    printf("Module name: %s\n", e.m.name);
    printf("Grade: %d\n",e.grade);
}