#include<stdio.h>

int gcd(int x, int y)
{  // ��Ŭ���� ȣ����
    if(y == 0)
        return x; // y 0�̸� x�� �ִ������̴�.
    return gcd(y, x % y); // x�� y�� �ִ������� y�� x % y �� �ִ������� ����.
}

int main(int argc, char *argv[]) {
    int i, j, g;

    scanf("%d %d", &i, &j);

    g = gcd(i,j);
    printf("%d\n%d",g, i * j / g);

    return 0;
}
