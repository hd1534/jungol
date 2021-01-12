#include<stdio.h>

int gcd(int x, int y)
{  // ��Ŭ���� ȣ����
    if(y == 0)
        return x; // y 0�̸� x�� �ִ������̴�.
    return gcd(y, x % y); // x�� y�� �ִ������� y�� x % y �� �ִ������� ����.
}

int main(int argc, char *argv[]) {
    int n, g, l;
    int i;
    int arr[10005];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", arr + i);

    g = l = arr[0];
    for (i = 0; i < n; i ++){
        g = gcd(g, arr[i]);
        l = l * arr[i] / gcd(l, arr[i]);
    }

    printf("%d %d",g, l);

    return 0;
}
