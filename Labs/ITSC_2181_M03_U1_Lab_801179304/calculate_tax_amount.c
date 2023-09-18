#include <stdio.h>
float calcTax(float income);

int main(){
    int dependents;
    float income, taxDue, taxCredit, adjustedTax;

    printf("Enter income: ");
    scanf("%f", &income);

    taxDue = calcTax(income);
    printf("Tax due = $%.2f\n", taxDue);
    
    printf("Enter the number of dependents (0 for none): ");
    scanf("%d", &dependents);

    taxCredit = dependents * 450;
    if (dependents > 5){
        taxCredit = 2250.0;
    }

    printf("Tax credit: $%.2f\n", taxCredit);

    adjustedTax = taxDue - taxCredit;
    printf("Adjusted Tax = $%.2f\n", adjustedTax);

    return 0;

}

float calcTax(float income){
    float taxDue;

    if (income >= 0 && income <= 9275){
        taxDue = income * 0.12;
    } else if (income > 9275 && income <= 37650){
        taxDue = income * 0.17;
    } else if (income > 37650 && income <= 91150){
        taxDue = income * 0.27;
    } else if (income > 91150 && income <= 190150){
        taxDue = income * 0.30;
    } else {
        taxDue = income * 0.35;
    }

    return taxDue;
}
