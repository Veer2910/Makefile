#include <stdio.h>
// Function Declaration
void project1_src1();
void project1_src2();
void project1_src3();

void project2_src1();
void project2_src2();
void project2_src3();

void project3_src1();
void project3_src2();
void project3_src3();

int main()
{
    int choice;

    printf("Enter your choice:\n");
    printf("1. Project 1\n");
    printf("2. Project 2\n");
    printf("3. Project 3\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    // Function Call
    switch (choice)
    {
    case 1:
        project1_src1();
        project1_src2();
        project1_src3();
        break;

    case 2:
        project2_src1();
        project2_src2();
        project2_src3();
        break;

    case 3:
        project3_src1();
        project3_src2();
        project3_src3();
        break;

    default:
        printf("Invalid choice\n");
    }

    return 0;
}