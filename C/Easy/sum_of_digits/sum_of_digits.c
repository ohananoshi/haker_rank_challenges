#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    do{
    scanf("%d", &n);
    }while((n < 10000) || (n > 99999));
    //Complete the code to calculate the sum of the five digits on n.
    int sum = 0, i;
    
    for(i = 0; i < 5; i++){
        sum = sum + n/pow(10,4-i);
        n = n%(int)pow(10,4-i);
    }
    
    printf("%d", sum);
    
    return 0;
}
