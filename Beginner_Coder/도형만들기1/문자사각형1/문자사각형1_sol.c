#include<stdio.h>

void print_arr(char (*arr)[105], int n) {
    int i,j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%c ",arr[j][i]);
        }
        puts("");
    }
}

int main(int argc, char *argv[]) {
    char arr[105][105];
    int i, j, k = 0, n;

    scanf("%d", &n);
    for (i = n - 1; i >= 0; i--) {
        for (j = n - 1; j >= 0; j--) {
            arr[i][j] = 'A' + k;
            k = (k + 1) % 26;
        }
    }

    print_arr(arr, n);

    return 0;
}
