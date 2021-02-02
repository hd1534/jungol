#include<stdio.h>
#include<math.h>

int isPrime(int n) ;

int main(int argc, char *argv[]) {
    int m, n;
    int sum = 0, min = 999999999;

    scanf("%d %d", &m, &n);
    if ( m == 2 || m == 1 ) {
        min = 2;
        sum = 2;
        m = 3;
    }
    else if ( m % 2 == 0 )
        m++;

    for (; m <= n; m += 2 )
        if ( isPrime(m) ) {
            if ( min > m )
                min = m;
            sum += m;
        }


    if ( sum )
        printf( "%d\n%d", sum, min);
    else
        printf("-1");

    return 0;
}


int isPrime(int n) {
    int i;

    if ( i == 2 )
        return 1;

    if ( n % 2 == 0 )
        return 0;


    for (i = 3; i <= (int)sqrt(n); i += 2 )
        if ( n % i == 0 )
            return 0;

    return 1;
}
