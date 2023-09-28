#include <stdio.h> 
#include <string.h>

#define MAX_LENGTH 20

struct customer{
    char firstName[MAX_LENGTH];
    char middleName[MAX_LENGTH];
    char lastName[MAX_LENGTH];
    char phone[16];
    float balance;
};

// Displays a single customer data
void show_customer(struct customer cust){
    printf("Customer: %s %s %s\n", cust.firstName, cust.middleName, cust.lastName); 
    printf("Phone Number: %s, Balance: $%.2f\n", cust.phone, cust.balance); 
}

// Method for the ':S' input, uses the show_customer method to display database
void show_database(struct customer cust_db[], int size){
    for (int i = 0; i < size; i++){
        printf("Customer List:\n");
        printf("--------------\n");
        show_customer(cust_db[i]);
        printf("--------------\n");
    }
}

int main(){
    struct customer customer_db[MAX_LENGTH];
    int num_customers = 0;

    while(1){
        printf("Please enter the next customer records.\n"
                ":X  Exits the program\n"
                ":S  Shows the contents of the database\n");

        char userInput[MAX_LENGTH];

        printf("First Name: ");
        scanf(" %s", userInput);
       
       // originally I had userInput == ':x', but it threw an error
       // I used strcmp from the string.h library to compare the user input to the characters
        if ((strcmp(userInput,":x") ==0) || (strcmp(userInput,":X") == 0)){
            printf("Good bye!\n");
            break;

        } else if ((strcmp(userInput,":s") == 0) || (strcmp(userInput,":S") == 0)){
            show_database(customer_db,num_customers);

        } else {
            if (num_customers <= 20){
                //I used strcpy to copy the userInput into the Customer firstName
                strcpy(customer_db[num_customers].firstName, userInput);

                printf("Middle Name:");
                scanf(" %s", customer_db[num_customers].middleName);

                printf("Last Name: ");
                scanf(" %s", customer_db[num_customers].lastName);

                printf("Phone Number: ");
                scanf(" %s", customer_db[num_customers].phone);

                printf("Balance Due: ");
                scanf(" %f", &customer_db[num_customers].balance);

                num_customers++;

            } else {
                printf("Customer database is full!\n");
            }
        }
    }
    return 0;
}





