#include <stdio.h>

void calc_bills(int dollar_amount, int *twenties, int *tens, int *fives, int *ones);

int main(){

    int dollar_amount, twenties, tens, fives, ones;

    printf("Enter dollar amount to pay: ");
    scanf("%d", &dollar_amount);

    calc_bills(dollar_amount, &twenties, &tens, &fives, &ones);

    printf("You need: \n"
            "$20 dollar bills: %d\n"
            "$10 dollar bills: %d\n"
            "$5 dollar bills: %d\n"
            "$1 dollar bills: %d\n",
            twenties, tens, fives, ones);

    return 0;
}

void calc_bills(int dollar_amount, int *twenties, int *tens, int *fives, int *ones){

    *twenties = dollar_amount / 20;
    dollar_amount = dollar_amount % 20;

    *tens = dollar_amount / 10;
    dollar_amount = dollar_amount % 10;

    *fives = dollar_amount / 5;
    dollar_amount = dollar_amount % 5;

    *ones = dollar_amount / 1;
    dollar_amount = dollar_amount % 1;

}