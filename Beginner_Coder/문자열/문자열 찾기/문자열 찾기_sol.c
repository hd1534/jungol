#include<stdio.h>

int main(int argc, char *argv[]) {
    int koi = 0, ioi = 0;
    int i = 0, j = 0;
    char koi_arr[] = "KOI", ioi_arr[] = "IOI";
    char tmp = 1;

    while ( tmp != '\n' ) {
        scanf("%c", &tmp);

        if ( koi_arr[i] == tmp ) {
            if ( i == 2 ) {
                i = 0;
                koi++;
            }
            else {
                i++;
            }
        }
        else {
            i = 0;
            if ( koi_arr[i] == tmp ) {
                i++;
            }
        }

        if ( ioi_arr[j] == tmp ) {
            if ( j == 2 ) {
                j = 1;
                ioi++;
            }
            else {
                j++;
            }
        }
        else {
            j = 0;
            if ( ioi_arr[j] == tmp ) {
                j++;
            }
        }
    }




    printf("%d\n%d", koi, ioi);
    return 0;
}
