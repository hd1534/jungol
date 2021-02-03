#include<stdio.h>

int main(int argc, char *argv[]) {
    char arr[5][20] = {0,};
    int i, j;

    for ( i = 0; i < 5; i++ )
        scanf("%s", arr[i]);

    for ( i = 0; i < 15; i++ )
        for ( j = 0; j < 5; j++ )
            if (arr[j][i])
                printf("%c", arr[j][i]);

    return 0;
}
