#include <stdio.h>
#include <string.h>

int main(){
    // Part 1
    char string[] = "123 3.14";
    int integer;
    float floatPointer;

    sscanf(string, "%d %f", &integer, &floatPointer);
    printf("Integer: %d\n", integer);
    printf("Float Number: %.2f\n", floatPointer);

    // Part 2
    char example[50];
    int number = 12345;

    sprintf(example, "The number is %d\n", number);
    printf("%s", example);

    return 0;


}