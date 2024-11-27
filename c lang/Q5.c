// 5. Write a function that checks if a person is eligible to vote. The person is eligible if they are 18 years old or older
#include <stdio.h>

int is_eligible_to_vote(int age) {
    if (age >= 18) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (is_eligible_to_vote(age)) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}