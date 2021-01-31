#include<stdio.h>

void Pascal_triangle (int (*arr)[33], int n);

int main(int argc, char *argv[]) {
    int arr[33][33] = {1,};
    int n, m;
    int i, j, k;

    scanf("%d %d", &n, &m);

    Pascal_triangle(arr, n);

    switch(m) {
        case 1:
            for ( i = 0; i < n; i++ ) {
                for ( j = 0; j <= i; j++ )
                    printf("%d ", arr[i][j]);
                puts("");
            }
            break;

        case 2:
            for ( i = n - 1, k = 0; i >= 0; i--, k++ ) {
                for ( j = 0 ; j < k; j++ )
                    printf(" ");
                for ( j = 0; j <= i; j++ )
                    printf("%d ", arr[i][j]);
                puts("");
            }

            break;

        case 3:
            for ( i = n - 1; i >= 0; i-- ) {
                for ( j = n - 1; j >= i; j-- )
                    printf("%d ", arr[j][i]);
                puts("");
            }
            break;

    }


    return 0;
}


void Pascal_triangle (int (*arr)[33], int n) {
    int i, j;

    for ( i = 0; i < n; i++ ) {
        for ( j = 0; j <= i; j++ ) {
            arr[i + 1][j] += arr[i][j];
            arr[i + 1][j + 1] += arr[i][j];
        }
    }
}
