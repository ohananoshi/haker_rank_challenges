#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    
    do{
       scanf("%d", &num); 
    }while((num < 1) || (num > 1000));
    
    arr = (int*) malloc(num * sizeof(int));
    
    for(i = 0; i < num; i++) {
        do{
            scanf("%d", arr + i);
        }while((arr[i] < 1) || (arr[i] > 1000));
    }
    
    int reversed_arr[num];
    for(int j = 0; j < num; j++){
        reversed_arr[j] = 0;
    }
    
    i--;
    
    for(int j = 0; j < num; j++){
        reversed_arr[j] = *(arr + i);
        i--;
    }
    
    for(int j = 0; j < num; j++){
        *(arr + j) = reversed_arr[j];
    }

    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
