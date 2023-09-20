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

// Part three of the assignment
// Exercise 3-3-3: Structs & Functions
void calc_volume(struct box *a, struct box *b){
    int a_volume = a->height * a->width * a->depth;
    int b_volume = b->height * b->width * b->depth;

    if (a_volume > b_volume){
        a->color = "green";
        a->x = 0.00;
        a->y = 0.00;
        a->z = 0.00;
    } else {
        b->color = "green";
        b->x = 0.00;
        b->y = 0.00;
        b->z = 0.00;
    }
}

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

    printf("Item: %d, Color: %s, Position: (%5.2f,%5.2f,%5.2f) Height: %d, Width: %d, Depth: %d\n",
    box1.itemnum, box1.color, box1.x, box1.y, box1.z, box1.height, box1.width, box1.depth);

    // Part two of the assignment
    // Exercise 3-3-2: Array of Structs

    struct box array_box[100];
    
    // Initialized values only for index 0 and 1
    array_box[0] = (struct box){1, "blue", 4,3,6,12.34,27.85,38.21};
    array_box[1] = (struct box){2, "green", 8, 12, 4, 34.65, 45.87, 24.36};

    calc_volume(&array_box[0], &array_box[1]);

    printf("First Box: Item: %d, Color: %s, Position: (%5.2f,%5.2f,%5.2f) Height: %d, Width: %d, Depth: %d\n",
           array_box[0].itemnum, array_box[0].color, array_box[0].x, array_box[0].y, array_box[0].z, 
           array_box[0].height, array_box[0].width, array_box[0].depth);

    printf("Second Box: Item: %d, Color: %s, Position: (%5.2f,%5.2f,%5.2f) Height: %d, Width: %d, Depth: %d\n",
           array_box[1].itemnum, array_box[1].color, array_box[1].x, array_box[1].y, array_box[1].z,
            array_box[1].height, array_box[1].width, array_box[1].depth);


}








