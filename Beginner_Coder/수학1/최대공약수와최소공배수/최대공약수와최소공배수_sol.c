#include<stdio.h>

int gcd(int x, int y)
{  // 유클리드 호제법
    if(y == 0)
        return x; // y 0이면 x가 최대공약수이다.
    return gcd(y, x % y); // x와 y의 최대공약수는 y와 x % y 의 최대공약수와 같다.
}

int main(int argc, char *argv[]) {
    int i, j, g;

    scanf("%d %d", &i, &j);

    g = gcd(i,j);
    printf("%d\n%d",g, i * j / g);

    return 0;
}
