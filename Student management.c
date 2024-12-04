#include <stdio.h>
struct Student {
    int roll_number;
    char name[40];
    float marks;
};
int main() {
    struct Student students[100];
    int student_count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Student");
        printf("\n2. Display");
        printf("\n3. Exit");
        printf("\nChoice:");
        scanf("%d", &choice);
    switch (choice) {
    case 1:
    if (student_count < 100) {
                    printf("\nEnter Roll Number: ");
                    scanf("%d", &students[student_count].roll_number);
                    printf("Enter Name: ");
                    scanf(" %[^\n]s", students[student_count].name);
                    printf("Enter Marks: ");
                    scanf("%f", &students[student_count].marks);
                    student_count++;
                    printf("Student added successfully!\n");
}   else {
                    printf("Maximum student limit reached!\n");
                }
    break;

    case 2:
    if (student_count == 0) {
                    printf("\nNo students in data\n");
}   else {
                    printf("\nStudent Details:\n");
                    printf("Roll\tName\t\tMarks\n");
                    printf("----------------------------\n");
    for (int i = 0; i < student_count; i++) {
                        printf("%d\t%s\t\t%.2f\n", 
                               students[i].roll_number, 
                               students[i].name, 
                               students[i].marks);
                    }
                }
    break;
    case 3:
                printf("Exiting program.\n");
    return 0;
    default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
