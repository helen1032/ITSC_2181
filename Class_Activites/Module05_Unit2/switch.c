#include <stdio.h>

int main(){
    int areaCode = 0;

    printf("Enter area code: ");
    scanf("%d", &areaCode);

    switch(areaCode){
        case 229:
            printf("Albany\n");
            break;
        case 404:
            printf("Atlanta\n");
            break;
        case 470:
            printf("Atlanta\n");
            break;
        case 478:
            printf("Macon\n");
            break;
        case 678:
            printf("Atlanta\n");
            break;
        case 706:
            printf("Columbus\n");
            break;
        case 762:
            printf("Columbus\n");
            break;
        case 770:
            printf("Atlanta\n");
            break;
        case 912:
            printf("Savannah\n");
            break;
        default:
            printf("Invalid Area Code\n");
            break;
    }

    return 0;
}