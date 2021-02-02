#include<stdio.h>


int main(int argc, char *argv[]) {
    int n, m;

    scanf ("%d %d", &n, &m);

    switch(m) {
        case 2:
            print_dec_to_b(n);
            break;
        case 8:
            printf("%o", n);
            break;
        case 16:
            printf("%x", n);
    }

    return 0;
}

