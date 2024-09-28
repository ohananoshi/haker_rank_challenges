#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


int find_nth_term(int n, int a, int b, int c){
  //Write your code here.
  if(n >= 4){
    return find_nth_term(n-1, a, b, c) + find_nth_term(n-2, a, b, c) + find_nth_term(n-3, a, b, c);  
  }
  else if(n == 3) return c;
  else if(n == 2) return b;
  else if(n == 1) return a;
  
  return 0;
}

int main() {
    int n, a, b, c;
    while(1){
        scanf("%d %d %d %d", &n, &a, &b, &c);
        if((n >= 1) && (n <= 20)) if((1 <= a) && (a <= b)) if((b <= c) && c <= 100) break;
    }
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
