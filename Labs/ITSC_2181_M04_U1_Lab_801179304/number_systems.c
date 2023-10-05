#include <stdio.h>

void dec_to_binary(int n);

int main(){

    int input_1, input_2;

    printf("Please input the first decimal value: ");
    scanf("%d", &input_1);
    printf("Please input the second decimal value: ");
    scanf("%d", &input_2);

    printf("The binary for input #1 is: \n");
    dec_to_binary(input_1);
    printf("\nThe binary for input #2 is: \n");
    dec_to_binary(input_2);    

    printf("\n");

    int AND_OPERATION = input_1 & input_2;
    int OR_OPERATION = input_1 | input_2;
    int XOR_OPERATION = input_1 ^ input_2;

    printf("input_1 & input_2 (bitwise AND) binary output: \n");
    dec_to_binary(AND_OPERATION);
    printf("\ninput_1 | input_2 (bitwise OR) binary output: \n");
    dec_to_binary(OR_OPERATION);
    printf("\ninput_1 ^ input_2 (bitwise XOR) binary output: \n");
    dec_to_binary(XOR_OPERATION);
    printf("\n");

    return 0;
}

void dec_to_binary(int n){
    int binaryNum[32];
    int i = 0;

    while (n > 0){
        // Stores the remainder in the array and continues to divide n by 2
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Correctly formats the binary number output
    for(int j = i - 1; j >= 0; j--){
        printf("%d", binaryNum[j]);
    }

}