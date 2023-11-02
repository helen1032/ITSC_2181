#include <stdio.h>
#include <stdlib.h>

int main(){
    int elements[100];
    int sum = 0;
    float average = 0.0;

    for(int i = 0; i < 100; i++){
        elements[i] = rand() % 101;
    }

    for(int i = 0; i < 100; i++){
        sum += elements[i];
    }

    average = (float)sum / 100;
    printf("The average is: %.2f\n", average);

    return 0;
}