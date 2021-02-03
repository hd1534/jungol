#include<stdio.h>

int main(int argc, char *argv[]) {
    char arr[60];
    char prev;
    int i, count = 1, height = 0;

    scanf("%s", arr);


    prev = arr[0];
    for ( i = 1; arr[i]; i++) {
        if ( arr[i] == prev ) {
            count++;
        }
        else {
            height += 5 + 5 * count;
            count = 1;
            prev = arr[i];
        }
    }
    height += 5 + 5 * count;

    printf("%d", height);

    return 0;
}
