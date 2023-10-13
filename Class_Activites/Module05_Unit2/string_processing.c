#include <stdio.h>
#include <string.h>

int main(){
    // Print the length of a string
    char mystr[100] = "test string";
    printf("The sentence length of mystr is: %u characters long.\n", (unsigned)strlen(mystr));

    // Write the code to concatenate two strings and print the result.
    char str[80];
    strcpy(str, "These strings are ");
    strcat(str, "concatenated.");
    puts(str);

    // Write the code to compare two strings and copy the lesser to the greater.
    char key[] = "apple";
    char buffer[80];
    do {
        printf("Guess my favorite fruit? ");
        scanf("%79s", buffer);
    } while (strcmp (key, buffer) != 0);
    puts("Correct answer!");

    // Write the code to find how many times the character '?' occurs in a string.
    char sample[] = "How? Many times? Does a question mark? Appear in this string???";
    char questionMarkKey[] = "?";
    char * pch;

    printf("%s\n", sample);
    pch = strpbrk(sample, questionMarkKey);
    while (pch != NULL){
        printf("%c ", *pch);
        pch = strpbrk (pch+1, questionMarkKey);
    }
    printf("\n");


    return 0;

}