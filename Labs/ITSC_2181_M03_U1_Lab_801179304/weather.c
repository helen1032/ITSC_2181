#include <stdio.h>

int main(){
    int maxDay = 0;
    int maxTemp = -100;

    printf("You will be asked to enter the daily high temperature for 10 consecutive days.\n");

    for (int day = 1; day <= 10; day++){
        int temp;

        printf("Enter a high temperature: ");
        scanf("%d", &temp);

        if(temp >= maxTemp){
            maxTemp = temp;
            maxDay = day;
        }
        
    }

    printf("The highest recorded temperature in the 10-day period was: %d\n", maxTemp);
    printf("Last recorded on: Day %d\n", maxDay);
}
