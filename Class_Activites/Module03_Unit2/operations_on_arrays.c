#include <stdio.h>

int main(){
    float numbers[5];
    float sum = 0;

    for (int i = 0; i < 5; i++){
        printf("Enter a number: ");
        scanf("%f", &numbers[i]);
    }
    
    for (int i = 0; i < 5; i++){
        sum += numbers[i];
    }

    float average = sum / 5;

    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);
}