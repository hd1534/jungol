#include<stdio.h>

int main(int argc, char *argv[]) {
    int i,j,k;
    int n, m;

    scanf("%d %d", &i, &j);
    k = i > j ? -1 : 1;

    for (m = i; m != j; m += k)
        print(m);
    print(m);

    return 0;
}

void print(int n) {  // 엌ㅋㅋ 이정도 하드코딩은 ㅋㅋㅋ
    printf("%d * 1 = %2d   %d * 2 = %2d   %d * 3 = %2d\n", n, n, n, n * 2, n, n * 3);
    printf("%d * 4 = %2d   %d * 5 = %2d   %d * 6 = %2d\n", n, n * 4, n, n * 5, n, n * 6);
    printf("%d * 7 = %2d   %d * 8 = %2d   %d * 9 = %2d\n\n", n, n * 7, n, n * 8, n, n * 9);
}
