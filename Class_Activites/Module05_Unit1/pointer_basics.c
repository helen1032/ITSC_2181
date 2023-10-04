#include <stdio.h>

int main(){
    // Part 1
    // declare a variable to store int data
    // declare a pointer to int data
    // using the pointer, set the value of the variable to 100
    
    int x;
    int *p = &x;
    *p = 100;
    printf("The value of variable x is: %d\n", *p);


    // Part 2
    // declare a variable to store floating point of data
    // declare a pointer to floating point data
    // using the pointer, set the value of the variable to 3.1416
    float y;
    float *pointer = &y;
    *pointer = 3.1416;
    printf("The value of variable y is: %.4f\n", *pointer);

}