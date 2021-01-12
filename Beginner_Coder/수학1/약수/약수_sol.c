#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[]) {
    int n , sq, cnt = 0, i = 0;
    int arr[10000];

    scanf("%d", &n);
    sq = (int)sqrt(n);

    while (cnt++ < sq)
        if ( !(n % cnt) ) {
            printf("%d ", cnt);
            arr[i] = n / cnt;
            if (arr[i++] == cnt)
                i--;
        }
    while (--i >= 0)
        printf("%d ", arr[i]);
    return 0;
}
