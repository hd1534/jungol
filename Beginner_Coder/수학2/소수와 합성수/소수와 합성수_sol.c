#include<stdio.h>
#include<math.h>

int isPrime(int n);

int main(int argc, char *argv[]) {
    int n, i;

    for ( i = 0; i < 5; i++ ) {
        scanf(" %d", &n);
        switch (n) {
            case 1:
                printf("number one\n");
                break;

            case 2:
                printf("prime number\n");
                break;

            default:
                printf("%s", isPrime(n) ? "prime number\n" : "composite number\n");
        }
    }


    return 0;
}

int isPrime(int n) {
    int i;

    if ( n % 2 == 0 )
        return 0;

    for (i = 3; i <= (int)sqrt(n); i += 2 )
        if ( n % i == 0 )
            return 0;

    return 1;
}
