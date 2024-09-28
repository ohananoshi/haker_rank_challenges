#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void sort_by_area(triangle* tr, int n) {
    double areas[n], semi_p, temp_area;
    int i , j;
    triangle tr_temp;
    
    for(i = 0; i < n; i++){
        semi_p = (tr[i].a + tr[i].b + tr[i].c)/2.00;
        areas[i] = pow(semi_p*(semi_p-tr[i].a)*(semi_p-tr[i].b)*(semi_p-tr[i].c), 0.5);
    }
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n - i - 1; j++){
            if(areas[j] > areas[j+1]){
                tr_temp = tr[j];
                tr[j] = tr[j+1];
                tr[j+1] = tr_temp;
                
                temp_area = areas[j];
                areas[j] = areas[j+1];
                areas[j+1] = temp_area;
            }
        }
    }

}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}