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
    int i = 0, j, k = 0, n;

    scanf("%d", &n);

    while(1) {
        for (j = 0; j < n; j++) {
            arr[j][i] = 'A' + k;
            k = (k + 1) % 26;
        }

        if (++i == n)
            break;

        for (j = n - 1; j >= 0; j--) {
            arr[j][i] = 'A' + k;
            k = (k + 1) % 26;
        }

        if (++i == n)
            break;


    }


    print_arr(arr, n);

    return 0;
}
