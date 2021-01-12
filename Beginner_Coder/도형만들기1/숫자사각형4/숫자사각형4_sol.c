#include<stdio.h>

int main(int argc, char *argv[]) {
    int n ,m;
    int i, j, k = 0;

    scanf("%d %d", &n, &m);

    switch(m) {
        case 1:
            for (i = 1; i <= n; i++) {
                for (j = 0; j < n; j ++)
                    printf("%d ", i);
                puts("");
            }
            break;

        case 2:
            i = n;
            while(1) {
                for (j = 0; j < n; j++)
                    printf("%d ", ++k);
                if (!--i)
                    break;

                puts("");

                for (j = 0; j < n; j++)
                    printf("%d ", k--);
                if (!--i)
                    break;

                puts("");
            }
            break;

        case 3:
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= n; j ++) {
                        printf("%d ", i * j);
                }
                puts("");
            }

    }

    return 0;
}
