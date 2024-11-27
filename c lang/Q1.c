// 1. Write a function to check the grade of a student based on the score:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F

#include <stdio.h>
int main() {
    int score;
    printf("Enter the student's score: ");
    scanf("%d", &score);
   

char get_grade(int score) {
    if (score >= 90 && score <= 100) {
        return 'A';
    } else if (score >= 80 && score <= 90) {
        return 'B';
    } else if (score >= 70 && score <= 80) {
        return 'C';
    } else if (score >= 60 && score <= 70) {
        return 'D';
    } else {
        return 'F';
    }
}
       char grade = get_grade(score);
    printf("%c\n", grade);
    return 0;
}