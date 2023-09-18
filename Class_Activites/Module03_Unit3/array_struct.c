#include <stdio.h> 

struct box{
    int itemnum;
    char * color;
    int height;
    int width;
    int depth;
    float x;
    float y;
    float z;
};

int main(){
    struct box box1;
    box1.itemnum = 3;
    box1.color = "red";
    box1.height =  3;
    box1.width =  2;
    box1.depth =  5;
    box1.x =  10.21;
    box1.y = 20.62;
    box1.z =  35.72;

    printf("Item: %d, Color: %s, Position: (%5.2f,%5.2f,%5.2f) Height: %d, Width: %d, Depth: %d",box1.itemnum, box1.color, box1.x, box1.y, box1.z, box1.height, box1.width, box1.depth);

    // Part two of the assignment
    // Exercise 3-3-2: Array of Structs

    struct box array_box[100];
    
    // Initialized values only for index 0 and 1
    array_box[0] = (struct box){1, "blue", 4,3,6,12.34,27.85,38.21};
    array_box[1] = (struct box){2, "green", 8, 12, 4, 34.65, 45.87, 24.36};

}



