#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char numbers[9][6] = {"one","two","three","four","five","six","seven","eight","nine"};
    

    for(int i = a; i < b+1; i++){
        if(i <= 9) printf("%s\n",numbers[i-1]);
        else printf("%s\n", (i%2 == 0 ? "even" : "odd"));
    }

    return 0;
}

