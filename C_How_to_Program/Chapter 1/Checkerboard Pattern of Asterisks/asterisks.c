#include <stdio.h>

int main(void) {
char ast[] = "* * * * * *";
char ast2[] = " * * * * * *";
int n;
int i;
int j;

    for (n = 0; n < 4; n++) {
        for (i = 0; i < 1; i++) {
        printf("%s\n", ast);
        for (j = 0; j < 1; j++) {
        printf("%s\n", ast2);
        }
    }
}

return 0;
}
