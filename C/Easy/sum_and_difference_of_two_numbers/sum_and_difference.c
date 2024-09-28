#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    int a, b;
    float d, e;
	
    while(1){
        scanf("%d %d", &a, &b);
        if((a > 1) && (a < 10000)){
            if((b > 1) && (b < 10000)) break;
        }
    }
    
     while(1){
        scanf("%f %f", &d, &e);
        if((d > 1) && (d < 10000)){
            if((e > 1) && (e < 10000)) break;
        }
    }
    
    printf("%d %d\n%.1f %.1f", (a+b), (a-b), (d+e), (d-e));
    
    return 0;
}
