#include <stdio.h>
int main(void) {
    double m[9] = {0};
    int n = 8;
    int s;
    for(int i = 0; i < n; i++) {
        m[i] = i * (i + 1) / 2;
        printf("%f ", m[i]);
    }
    printf("\n");
    for(int i = n - 1; i >= 0; i--) {
        m[i] = i * (i + 1) / 2;
        printf("%f ", m[i]);
    }
    printf("\n");
    return 0;
}