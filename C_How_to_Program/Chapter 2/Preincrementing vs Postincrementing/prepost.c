#include <stdio.h>

main() {
    printf("Difference between Preincrementing & Postincrementing is\n");
    int a  = 0;
    int b = 0;

    printf("Preincrementing increments a by 1 first.\n");
    while (a <= 6) {
        printf("%d\n", a);
        ++a;
    }

    printf("Postincrementing uses the current value of a in the expression, then increment a by 1.\n");
    while (b <= 6) {
        printf("%d\n", b);
        b++;
    }

    return 0;
}
