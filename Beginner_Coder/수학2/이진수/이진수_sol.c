#include<stdio.h>

int main(int argc, char *argv[]) {
    unsigned long int o = 0,  sq;
    char arr[40];
    int size;

    scanf ("%s", arr);

    for (size = 0; arr[++size];);

    for ( sq = 1; size > 0; sq *= 2 )
        if ( arr[--size] == '1' )
            o += sq;

    printf("%lu", o);

    return 0;
}
