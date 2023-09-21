#include <stdio.h>
#include <ctype.h>

void capitalize(char *str){
    // Iterates through each character of the string until it reaches the end
    for(int i = 0; str[i] != '\0'; i++){
        // checks if str[i] is alphabetic
        if (isalpha(str[i])){
            // transliterates a lowercase character to uppercase
            str[i]= toupper(str[i]);
        }
    }
}

int main(){
    //First test
    char the_str[] = "test";
    capitalize(the_str);
    printf("%s\n", the_str);

    //Second test
    char the_str2[] = "This IS a tesT!";
    capitalize(the_str2);
    printf("%s\n", the_str2);
}

