#include<stdio.h>

int main(int argc, char *argv[]) {
    int n, sum, r;
    int i = 11, j, tmp;

    while (--i) {
        scanf(" %d", &n);

        if (!n)
            return 0;

        sum = r = j = 0;

        while (n) {
            tmp = n % 10;
            sum += tmp;
            r = r * 10 + tmp;
            n /= 10;
        }

        printf("%d %d\n", r, sum);

    }

    return 0;
}
