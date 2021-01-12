#include<stdio.h>

int main(int argc, char *argv[]) {
    int i, j, k;
    int arr[11] = {0,};

    scanf("%d %d %d", &i, &j, &k);
    i = i * j * k;

    while (i) {
        arr[i % 10] ++;
        i /= 10;
    }

    for (i = 0; i < 10; i++)
        printf("%d\n", arr[i]);

    return 0;
}
