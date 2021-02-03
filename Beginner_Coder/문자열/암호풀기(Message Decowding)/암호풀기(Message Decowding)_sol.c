// 답은 맞는데 왜 틀린걸로 나오지..

#include<stdio.h>

char key[30];

char decrypt(char c);

int main(int argc, char *argv[]) {
    char tmp;

    scanf("%s\n", key);

    while ( scanf("%c", &tmp) && tmp != '\n')
        printf("%c", decrypt(tmp));

    return 0;
}

char decrypt(char c) {
    if ( c == ' ' )
            return ' ';

    if ( c < 'a' )
        return key[c - 'A'] - 'a' + 'A';

    return key[c - 'a'];
}
