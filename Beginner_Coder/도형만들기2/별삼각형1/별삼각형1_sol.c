#include<stdio.h>

int main(int argc, char *argv[]) {
    int n, m;
    int i, j;

    scanf("%d %d", &n, &m);

    if (n > 100 || n < 1 || m > 3 || m < 1){
        printf("INPUT ERROR!");
        return 0;
    }

    switch(m) {
        case 1:
            for ( i = 0; i < n; i++ ) {
                for (j = 0; j <= i; j++ )
                    printf("*");
                puts("");
            }
            break;

        case 2:
            for ( i = n; i > 0; i-- ) {
                for (j = 0; j < i; j++ )
                    printf("*");
                puts("");
            }
            break;

        case 3:
            for ( i = 0; i < n; i++ ) {
                for ( j = n - i - 1; j > 0; j--)
                    printf(" ");
                printf("*");
                for (j = 0; j < i; j++ )
                    printf("**");
                puts("");
            }

    }

    return 0;
}
