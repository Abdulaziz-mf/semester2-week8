//defining the structures
#ifndef HEADERS_H
#define HEADERS_H

typedef struct student_ {
    char name[100];
    char course[100];
    char department[100];
} Student;

typedef struct module_ {
    char name[100];
    int credits[100];
} Module;

typedef struct enrolment_{
    Student s;
    Module m;
    int grade;
} Enrolment;

Enrolment enrolStudent(Student s, Module m);
void assignGrade(Enrolment *e, int newgrade);
void studentGrade(Enrolment e);

#endif