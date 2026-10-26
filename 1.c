#include <stdio.h>
int main(void) {
    double x, y;
    int n = 0;
    printf("N X Y\n");
    for(x = 1.0; x <= 5.0; x += 0.5) {
        y = 1.0 / x;
        n++;
        printf("%d %0.04f %0.04f\n", n, x, y);
    }
    return 0;
}
//зачетка 111260343