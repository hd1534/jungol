#include<stdio.h>

int main(int argc, char *argv[]) {
    int n, m;
    int i, j, c;

    scanf("%d %d", &n, &m);

    if (n > 100 || n < 1 || !(n % 2) || m > 3 || m < 1){
        printf("INPUT ERROR!");
        return 0;
    }

    switch(m) {
        case 1:
            puts("1");
            for (c = 1, i = 1; i <= n/2; i++ ) {
                c += i * 2;
                for ( j = i * 2; j > 0; j--)
                    printf("%d ", c--);
                puts("");
                c += i * 2;
                for ( j = i * 2 + 1; j > 0; j--)
                    printf("%d ", ++c);
                puts("");

            }
            break;

        case 2:
            for ( i = n, c = 0; i > 0; i--, c++ ) {
                for (j = 0; j < c; j++)
                    printf("  ");
                printf("%d", c);
                for ( j = 1; j < i; j++ )
                    printf(" %d %d", c, c);
                puts("");
            }
            break;

        case 3:
            for ( i = 1; i <= n/2; i++) {
                for ( j = 1; j <= i; j++ )
                    printf("%d ", j);
                puts("");
            }
            for ( ; i > 0; i--) {
                for ( j = 1; j <= i; j++ )
                    printf("%d ", j);
                puts("");
            }

    }

    return 0;
}
