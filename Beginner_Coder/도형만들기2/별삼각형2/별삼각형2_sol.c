#include<stdio.h>

int main(int argc, char *argv[]) {
    int n, m;
    int i, j, k;

    scanf("%d %d", &n, &m);

    if (n > 100 || n < 1 || !(n % 2) || m > 4 || m < 1){
        printf("INPUT ERROR!");
        return 0;
    }

    switch(m) {
        case 1:
            for ( i = 0; i < n / 2; i++ ) {
                for (j = 0; j <= i; j++ )
                    printf("*");
                puts("");
            }
            for ( ; i >= 0; i-- ) {
                for (j = 0; j <= i; j++ )
                    printf("*");
                puts("");
            }
            break;

        case 2:
            k = n / 2;
            for ( i = 0; i < n / 2; i++, k-- ) {
                for ( j = 0; j < k; j++)
                    printf(" ");
                for (j = 0; j <= i; j++ )
                    printf("*");
                puts("");
            }
            for ( ; i >= 0; i--, k++ ) {
                for ( j = 0; j < k; j++)
                    printf(" ");
                for (j = 0; j <= i; j++ )
                    printf("*");
                puts("");
            }
            break;

        case 3:
            k = 0;
            for ( i = 0; i < n / 2; i++, k++ ) {
                for ( j = 0; j < k; j++ )
                    printf(" ");
                printf("*");
                for ( j = n / 2 - i; j > 0; j-- )
                    printf("**");
                puts("");
            }
            for ( i = 0; i < n / 2 + 1; i++, k-- ) {
                for ( j = 0; j < k; j++ )
                    printf(" ");
                printf("*");
                for ( j = 0; j < i; j++ )
                    printf("**");
                puts("");
            }
            break;

        case 4:
            k = 0;
            for ( i = 0; i < n / 2; i++, k++ ) {
                for ( j = 0; j < k; j++ )
                    printf(" ");
                printf("*");
                for ( j = n / 2 - i; j > 0; j-- )
                    printf("*");
                puts("");
            }
            for ( i = 0; i < n / 2 + 1; i++ ) {
                for ( j = 0; j < k; j++ )
                    printf(" ");
                printf("*");
                for ( j = 0; j < i; j++ )
                    printf("*");
                puts("");
            }

    }

    return 0;
}
