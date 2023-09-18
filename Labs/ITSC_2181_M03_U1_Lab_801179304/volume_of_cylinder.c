#include <stdio.h>

void cyl (float, float);
float vol;

int main(){
    float radius;
    float height;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Enter height: ");
    scanf("%f", &height);

    cyl (radius, height);
    printf("Volume: %.2f\n", vol);

    return 0;
}

void cyl (float r, float h){
    vol = h * (r * r * 3.14159);
}