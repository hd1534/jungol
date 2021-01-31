#include<stdio.h>

int main(int argc, char *argv[]) {
    int arr[105][105];
    int n, m;
    int v = 1, h = -1;
    int i = 0, j, k, c = 0;

    scanf("%d", &n);
    m = n;
    j = n - 1;

    for ( k = 0; k < n; k++ )
        arr[0][k] = ++c;

    while (--n > 0) {
        for ( k = 0; k < n; k++ ) {
            i += v;
            arr[i][j] = ++c;
        }
        v *= -1;

        for ( k = 0; k < n; k++ ) {
            j += h;
            arr[i][j] = ++c;
        }
        h *= -1;

    }

    for ( i = 0; i < m; i++ ) {
        for ( j = 0; j < m; j++ )
            printf("%d ", arr[i][j]);
        puts("");
    }

    return 0;
}
