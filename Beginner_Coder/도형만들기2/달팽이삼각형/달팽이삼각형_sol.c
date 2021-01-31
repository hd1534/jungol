#include<stdio.h>

int main(int argc, char *argv[]) {
    int arr[105][105];
    int n, m;
    int i = -1, j = -1, k, c = 0;

    scanf("%d", &n);
    m = n++;

    while (n > 0) {
        for ( n--, k = 0; k < n; k++) {
            arr[++i][++j] = c;
            c = ( c + 1 ) % 10;
        }
        for ( n--, k = 0; k < n; k++ ) {
            arr[i][--j] = c;
            c = ( c + 1 ) % 10;
        }
        for ( n--, k = 0; k < n; k++ ) {
            arr[--i][j] = c;
            c = ( c + 1 ) % 10;
        }
    }

    for ( i = 0; i < m; i++ ) {
        for ( j = 0; j <= i; j++ )
            printf("%d ", arr[i][j]);
        puts("");
    }

    return 0;
}
