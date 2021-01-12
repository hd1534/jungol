#include<stdio.h>

int main(int argc, char *argv[]) {
    int n, k, i;

    scanf("%d %d", &n, &k);

    for (i = 1; i <= n; i++) {
        if ( !(n % i))
            if (!--k)
                break;
    }

    printf("%d", k ? 0 : i);

    return 0;
}
