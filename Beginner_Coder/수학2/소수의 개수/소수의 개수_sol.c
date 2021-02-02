// 범위가 시간 초과 안날것 같아서 그냥 에라토스테네스의 체를 안씀

#include<stdio.h>
#include<math.h>

int isPrime(int n) ;

int main(int argc, char *argv[]) {
    int m, n;
    int c = 0;

    scanf("%d %d", &m, &n);
    if ( m <= 2 && n >= 2 )
        c++;
    if ( m % 2 == 0 )
        m++;

    for (; m <= n; m += 2 )
        if ( isPrime(m) )
            c++;

    printf("%d", c);

    return 0;
}


int isPrime(int n) {
    int i;

    if ( n == 1 )
        return 0;

    if ( n == 2 )
        return 1;

    if ( n % 2 == 0 )
        return 0;


    for (i = 3; i <= (int)sqrt(n); i += 2 )
        if ( n % i == 0 )
            return 0;

    return 1;
}
