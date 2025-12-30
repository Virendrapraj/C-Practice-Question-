// 42. Write a C program to find size of structure.
#include <stdio.h>
struct sizeofstruc
{
    /* data */
    char name[50];
    int DOB;
    int EnrollNum;
    char collage[50];
    char branch[50];
};


int main() {
    struct  sizeofstruct call;
   
    
    
    printf("Enter Name OF Student  : ");
    scanf("%s", call.name);

    printf("Enter Date of Birth: ");
    scanf("%s", call.DOB);

    printf("Enter Collage Name: ");
    scanf("%s", &call.collage);

    printf("\nEnter Branch :\n");
    printf("Branch is: %s\n", call.branch);
    printf("Enrollment number : %d\n", call.EnrollNum);

    printf("Size of Structure %d", sizeof(call));
    return 0;
}