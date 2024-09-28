#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    #define MAX_LEN 100
    
    char ch;
    char s[MAX_LEN], sen[MAX_LEN];
    
    scanf("%c", &ch);
    scanf(" %[^\n]%*c", s);
    scanf(" %[^\n]%*c", sen);
    
    printf("%c\n%s\n%s", ch, s, sen);
    return 0;
}
