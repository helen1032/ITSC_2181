#include <stdio.h> 

int main(){
    int myArray[12] = {0};
    myArray[1] = 1;
    myArray[3] = 3;
    myArray[7] = 7;
    int i;

    for (i = 0; i < 12; i++){
        printf("Element %d: %d\n", i, myArray[i]);
    }

    int sum = 0;
    for (i = 0; i < 12; i++){
        sum += myArray[i];
    }
    printf("Sum of array: %d\n", sum);
}