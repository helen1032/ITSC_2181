#include <stdio.h>

int main(){
    int grade = 0;

    printf("Please enter the numeric grade: ");
    scanf("%d", &grade);

    if (grade >= 90 && grade <= 100 ){
        printf("The letter grade is A.\n");
    }
    else if (grade >= 80 && grade <= 89){
        printf("The letter grade is B.\n");
    }
    else if (grade >= 70 && grade <= 79){
        printf("The letter grade is C.\n");
    }
    else if (grade >= 60 && grade <= 69){
        printf("The letter grade is D.\n");
    }
    else if (grade < 60 && grade >= 0){
        printf("The letter grade is F.\n");
    } else {
        printf("Invalid Input. Please enter a number between 100 and 0.\n");
    }

    return 0;
}

