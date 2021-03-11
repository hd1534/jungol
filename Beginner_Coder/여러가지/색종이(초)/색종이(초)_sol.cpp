#include<bits/stdc++.h>

using namespace std;


int main() {
    bool arr[105][105] = {0,};
    int n, result = 0;
    int x, y, i, j, k;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf(" %d %d", &x, &y);

        for (j = 0; j < 10; j++)
            for (k = 0; k < 10; k++)
                arr[x+j][y+k] = 1;
    }

    for (i = 0; i < 105; i++)
        for (j = 0; j < 105; j++)
            result += arr[i][j];

    cout << result;

    return 0;
}
