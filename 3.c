#include <stdio.h> 
#include <math.h>
int main(void) {
    int n = 0;
    while(scanf("%d", &n)==1 && n > 0) {
        double s = 0.0;
        for(i = 1; i <= n; i++) {
            s += sin(i) / i;
        }
        printf("SUM: %0.6f\n", s);
    }
    return 0;
}