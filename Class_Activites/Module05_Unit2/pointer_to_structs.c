#include <stdio.h>
#include <string.h>

struct box{
    int itemnum;
    char * color;
    int height;
    int width;
    int depth;
    float x;
    float y;
    float z;
} box1, *b, box2, *d;

void calc_volume(struct box *a, struct box *b);

int main(){
    b = &box1;
    (*b).itemnum = 1;
    (*b).color = "red";
    (*b).height = 12;
    (*b).width = 18;
    (*b).depth = 16;
    (*b).x = 5.43;
    (*b).y = 9.76;
    (*b).z = 12.13;

    d = &box2;
    (*d).itemnum = 2;
    (*d).color = "blue";
    (*d).height = 17;
    (*d).width = 11;
    (*d).depth = 13;
    (*d).x = 9.43;
    (*d).y = 4.76;
    (*d).z = 1.13;

    calc_volume(b,d);

    printf("First Box: Item: %d, Color: %s, Position: (%5.2f,%5.2f,%5.2f) Height: %d, Width: %d, Depth: %d\n",
           (*b).itemnum, (*b).color, (*b).x, (*b).y, (*b).z, 
           (*b).height, (*b).width, (*b).depth);

    printf("Second Box: Item: %d, Color: %s, Position: (%5.2f,%5.2f,%5.2f) Height: %d, Width: %d, Depth: %d\n",
            (*d).itemnum, (*d).color, (*d).x, (*d).y, (*d).z,
            (*d).height, (*d).width, (*d).depth);

    return 0;
}

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