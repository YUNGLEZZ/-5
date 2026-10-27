#include <stdio.h>
double calc(double a, double b) {
    double g = ((a + b)*(a + b)*(a + b)) / ((a * a) + (b * b));
    return g;
}
int main(void) {
    double a = 0.0, b = 0.0;
    while(scanf("%lf %lf", &a, &b)==2) {
        printf("%0.4f\n", calc(a, b));
    }
    return 0;
}