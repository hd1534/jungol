#include<stdio.h>
#include<math.h>

int isPrime(int n);

int main(int argc, char *argv[]) {
    int n;
    int i, j;

    scanf ("%d", &n);

    while ( n-- ) {
        scanf ("%d", &i);
        if (isPrime(i)) {
            printf("%d\n", i);
            continue;
        }
        for ( j = i; i && j;) {
            if (isPrime(--i)) {
                printf("%d ", i);
                i = 0;
            }
            if (isPrime(++j)) {
                printf("%d", j);
                j = 0;
            }
        }
        puts("");
    }

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
