//Write a C program to store student details using structure.
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    struct Student student;

    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter Name: ");
    scanf("%s", student.name);

    printf("Enter Marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}