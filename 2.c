#include <stdio.h>
const int HEIGHT = 5;
int main(void) {
    for(int i = 0; i < HEIGHT; i++) {
        for(int n = 0; n < i; n++) {
            printf(" ");
        }
        printf("X");
        for(int s = 0; s < HEIGHT - 1 - i; s++) {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}