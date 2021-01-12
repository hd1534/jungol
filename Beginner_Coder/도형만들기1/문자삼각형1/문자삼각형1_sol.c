#include<stdio.h>

void print_arr(char (*arr)[105], int n) {
    int i,j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%c ",arr[i][j]);
        }
        puts("");
    }
}

int main(int argc, char *argv[]) {
    char arr[105][105];
    int i, j, k = 0, n;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++)
            arr[i][j] = ' ';
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            arr[j + i][n - j - 1] = 'A' + k;
            k = (k + 1) % 26;
        }
    }

    print_arr(arr, n);

    return 0;
}
