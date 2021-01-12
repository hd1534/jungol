#include<stdio.h>

int main(int argc, char *argv[]) {
    int n, m;
    int i, a = 0, b = 0;
    int arr[44];

    scanf(" %d", &n);
    for (i = 0; i < n; i++)
        scanf(" %d", arr + i);
    scanf(" %d", &m);

    for (i = 0; i < n; i++) {
            if ( !(m % arr[i]) )
                a += arr[i];
            if ( !(arr[i] % m) )
                b += arr[i];
    }

    printf("%d\n%d", a, b);

    return 0;
}
