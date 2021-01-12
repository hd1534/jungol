#include<stdio.h>

int main(int argc, char *argv[]) {
    int n,m;
    int i,j=0;

    scanf("%d %d", &n, &m);

    while(n--) {
        for(i = 0; i < m; i++)
            printf("%d ", ++j);
        printf("\n");
    }

    return 0;
}
