#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000

int main(){
    char sentence[MAX_SIZE];

    FILE * writefile;
    writefile = fopen("output.txt", "w");
    if (writefile == NULL){
        (void) printf("Error.\n");
        return -1;
    }

    fgets(sentence, MAX_SIZE, stdin);
    fputs(sentence, writefile);
    fclose(writefile);

    return 0;
}