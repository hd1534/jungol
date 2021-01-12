#include<stdio.h>

int main(int argc, char *argv[]) {
    int n,m;
    int i,j=0;

    scanf("%d %d", &n, &m);

    while(1) {
        for(i = 0; i < m; i++)
            printf("%d ", ++j);
        printf("\n");

        if (!--n)
            break;

        j += m;

        for(i = 0; i < m; i++)
            printf("%d ", j--);
        printf("\n");

        if (!--n)
            break;

        j += m;

    }

    return 0;
}
