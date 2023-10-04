#include <stdio.h>

int main(){
    int a, b, *ap, *bp; 
    char c, d, *cp, *dp; 
    float f, g, *fp, *gp;

    // Part 1
    // Do any of the following statemes cause a problem?
    ap = &c; 
    *ap = 3333;
    c = ap;
    c = *ap;

    // Part 2
    dp = ap;
    dp = 'Q';
    // fp = 3.14159;
    gp = &fp;
   *gp = 3.14159;

}