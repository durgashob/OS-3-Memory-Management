#include <stdio.h>

int main(void) {

    printf("====================================\n");
    printf("       DATA TYPE SIZE EXPLORATION\n");
    printf("====================================\n\n");

    printf("char:          %zu bytes\n", sizeof(char));
    printf("int:           %zu bytes\n", sizeof(int));
    printf("float:         %zu bytes\n", sizeof(float));
    printf("double:        %zu bytes\n", sizeof(double));
    printf("long:          %zu bytes\n", sizeof(long));
    printf("unsigned int:  %zu bytes\n", sizeof(unsigned int));
    printf("long long:     %zu bytes\n", sizeof(long long));

    printf("\n====================================\n");

    return 0;
}
