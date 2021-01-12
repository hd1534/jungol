#include<stdio.h>

int gcd(int x, int y)
{  // 유클리드 호제법
    if(y == 0)
        return x; // y 0이면 x가 최대공약수이다.
    return gcd(y, x % y); // x와 y의 최대공약수는 y와 x % y 의 최대공약수와 같다.
}

int main(int argc, char *argv[]) {
    int n, g, l;
    int i;
    int arr[10005];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", arr + i);

    g = l = arr[0];
    for (i = 0; i < n; i ++){
        g = gcd(g, arr[i]);
        l = l * arr[i] / gcd(l, arr[i]);
    }

    printf("%d %d",g, l);

    return 0;
}
