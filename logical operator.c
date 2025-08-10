#include <stdio.h>

int main() {
    int marks;
    printf("Enter the marks of student: ");
    scanf("%d", &marks);

    if ((marks >= 90 && marks <= 100) || marks == 89) {
        printf("Grade A+\n");
    }
    else if ((marks >= 80 && marks < 90) || marks == 79) {
        printf("Grade A\n");
    }
    else if ((marks >= 70 && marks < 80) || marks == 69) {
        printf("Grade B\n");
    }
    else if ((marks >= 60 && marks < 70) || marks == 59) {
        printf("Grade C\n");
    }
    else if ((marks >= 0 && marks < 60) || marks == -1) {
        printf("Grade F\n");
    }
    else {
        printf("Invalid Marks\n");
    }

    return 0;
}
