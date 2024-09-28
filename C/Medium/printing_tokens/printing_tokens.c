#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    do{
        scanf("%[^\n]", s);
    }while((strlen(s) < 1) || (strlen(s) > 1000));
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    
    char delm[2] = " ";
    char *token = strtok(s, delm);
    
    while(token != NULL){
        printf("%s\n", token);
        token = strtok(NULL, delm);
    }
    
    return 0;
}
