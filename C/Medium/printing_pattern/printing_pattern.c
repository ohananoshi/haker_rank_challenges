#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void make_sqr(int n){

    int matrix[(2*n)-1][(2*n)-1], i, j, k, u = n;

    for(i = 0; i < n; i++){
        for(j = i; j < (2*n - 1 - i); j++){
            for(k = i; k < (2*n - 1 - i); k++){
                matrix[j][k] = u;
            }
        }
        u--;
    }

    for(i = 0; i < (2*n - 1); i++){
        for(j = 0; j < (2*n - 1); j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    make_sqr(n);
    return 0;
}
