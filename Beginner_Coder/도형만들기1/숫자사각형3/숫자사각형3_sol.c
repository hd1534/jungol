#include<stdio.h>

int main(int argc, char *argv[]) {
    int i,j,k;
    int n;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
            k = i;
            for (j = 0; j < n; j++, k+=n)
                printf("%d ", k);
            printf("\n");
    }

    return 0;
}
