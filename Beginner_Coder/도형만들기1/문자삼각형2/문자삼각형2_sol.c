#include<stdio.h>

void print_arr(char (*arr)[105], int n) {
    int i,j;
    for (i = 0; i < n/2; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
    for (; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]) {
    char arr[105][105] = {0};
    int i, j, k = 0, n, m = 1;

    scanf("%d", &n);
    if ( n < 1 | n > 100 | !(n % 2)) {
        printf("INPUT ERROR");
        return 0;
    }

    for (i = n/2; i >= 0; i--) {
        for (j = 0; j < m; j++) {
            arr[i + j][i] = 'A' + k;
            k = (k + 1) % 26;
        }
        m += 2;
    }

    print_arr(arr, n);

    return 0;
}
