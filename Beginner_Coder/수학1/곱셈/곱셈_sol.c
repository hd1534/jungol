#include<stdio.h>

int main(int argc, char *argv[]) {
    int i, j, k;
    scanf("%d %d", &i, &j);
    k = i * j;
    while (j) {
            printf("%d\n", i * (j % 10));
            j /= 10;
    }
    printf("%d", k);

    return 0;
}
