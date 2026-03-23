// structure.h
#ifndef STRUCTURE_H
#define STRUCTURE_H

#define NAME_LENGTH 50
#define NUM_MODULES 3

typedef struct {
    char name[NAME_LENGTH];
    int id;
    float marks[NUM_MODULES];
} Student;

// Function declarations
float calculate_average(Student student);
void display_student(Student student);
void update_name(Student *student, const char *new_name);
int update_mark(Student *student, int module_index, float new_mark);

#endif