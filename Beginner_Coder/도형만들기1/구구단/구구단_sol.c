#include<stdio.h>

int main(int argc, char *argv[]) {
    int i,j,k;
    int n, m;

    scanf("%d %d", &i, &j);
    while (i < 2 | i > 9 | j < 2 | j > 9) {
        printf("INPUT ERROR!\n");
        scanf("%d %d", &i, &j);
    }
    k = i > j ? -1 : 1;

    for (n = 1; n < 10; n++) {
        for (m = i; m != j; m += k)
                printf("%d * %d = %2d   ", m, n, m * n);
        printf("%d * %d = %2d\n", m, n, m * n);
    }

    return 0;
}
