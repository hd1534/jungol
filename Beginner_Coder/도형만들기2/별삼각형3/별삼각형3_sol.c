#include<stdio.h>

int main(int argc, char *argv[]) {
    int n;
    int i, j, k;

    scanf("%d", &n);

    if (n > 100 || n < 1 || !(n % 2)) {
        printf("INPUT ERROR!");
        return 0;
    }

    for ( i = 0; i < n/2; i++) {
        for ( j = 0; j < i; j++ ) {
            printf(" ");
        }
        printf("*");
        for ( j = 0; j < i; j++ ) {
            printf("**");
        }
        puts("");
    }


    for ( i = n/2; i >= 0; i--) {
        for ( j = 0; j < i; j++ ) {
            printf(" ");
        }
        printf("*");
        for ( j = 0; j < i; j++ ) {
            printf("**");
        }
        puts("");
    }

    return 0;
}
