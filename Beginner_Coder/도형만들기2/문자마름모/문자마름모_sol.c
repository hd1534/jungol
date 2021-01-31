#include<stdio.h>

int main(int argc, char *argv[]) {
    int arr[205][205];
    int n, m;
    int i = 0, j, k, c = 0;

    scanf("%d", &n);
    m = n * 2;

    for ( i = 0; i < m; i++ )
        for ( j = 0; j < m; j++ )
            arr[i][j] = ' ';


    for (m = n; --m > 0;) {
        i = n - m;
        j = n;

        for ( k = 0; k < m; k++ ) {
            arr[i++][j--] = 'A' + c;
            c = ( c + 1 ) % 26;
        }
        for ( k = 0; k < m; k++ ) {
            arr[i++][j++] = 'A' + c;
            c = ( c + 1 ) % 26;
        }
        for ( k = 0; k < m; k++ ) {
            arr[i--][j++] = 'A' + c;
            c = ( c + 1 ) % 26;
        }
        for ( k = 0; k < m; k++ ) {
            arr[i--][j--] = 'A' + c;
            c = ( c + 1 ) % 26;
        }
    }
    arr[n][n] = 'A' + c;

    m = n * 2;
    for ( i = 1; i < m; i++ ) {
        for ( j = 1; j < m; j++ )
            printf("%c ", arr[i][j]);
        puts("");
    }

    return 0;
}
