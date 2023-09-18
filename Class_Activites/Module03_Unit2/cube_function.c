#include <stdio.h> 

float cube_volume(float side){
    float volume = side * side * side;
    return volume;
}

int main(void){
    float side_length = 5.0;
    float total_volume = cube_volume(side_length);
    printf("The volume of a cube with a side length of 3 is: %.2f\n", total_volume);
}