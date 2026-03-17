/**
 * Implementation of a student record management system using structures
 * 
 * This program demonstrates the use of structures in C to manage student data
 * including personal information and module marks.
 */

#include <stdio.h>
#include <string.h>


typedef struct student_record{
    char name[100];
    int id;
    float marks[3];
} Student;
/**
 * Calculate the average mark for a student
 * 
 * param student The student whose average mark is to be calculated
 * return float The average mark
 */
float calculate_average(Student student) {
    // TODO: Implement this function to calculate and return the average
    // of the three module marks
    float sum = student.marks[0] + student.marks[1] +student.marks[2];
    float average = sum/3;
    return average; // Placeholder return value
}

/**
 * Display student information including name, ID, marks, and average
 * 
 * student The student whose information is to be displayed
 */
void display_student(Student student) {
    // TODO: Implement this function to display student information
    // Format: Name, ID, individual marks, and average mark
    printf("Name: %s\n",student.name);
    printf("ID: %d\n", student.id);
    printf("Marks: %.2f , %.2f , %.2f\n", student.marks[0],student.marks[1],student.marks[2]);
    float average = calculate_average(student);
    printf("Average: %.2f\n",average);

}
int main( void ) {
    // TODO: Create and initialise a student variable with sample data
    // Example: name = "John Smith", id = 12345, marks = {75.0, 68.5, 81.0}

    // struct student_record student;
    // student.id = 123;
    // strcpy(student.name, "John");
    // student.marks[0] = 70.6;
    // student.marks[1] = 80.5;
    // student.marks[2] = 90.3;
    Student student = {
        .id = 123,
        .name = "John",
        .marks[0] = 70.6,
        .marks[1] = 80.5,
        .marks[2] = 90.3

    };

    
    // TODO: display the student data and average mark
    display_student(student);
    return 0;
}