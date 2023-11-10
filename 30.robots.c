// 30. B. Robots(1680)
#include <stdio.h>
int main() {
    int t, n, m, x, y;
    scanf("%d", &t);
    char l[5001][5][5];
    for (int i = 0; i < t; i++) {
        scanf("%d%d", &n, &m);
        x = -1;
        y = 6;
        for (int j = 0; j < n; j++) {
            scanf("%s", &l[i][j]);
            for (int k = 0; k < m; k++) {
                if (l[i][j][k] == 'R') {
                    if (x == -1) x = k;
                    else if (y > k) y = k;
                }
            }
        }
        printf(x > y ? "NO\n" : "YES\n");
    } return 0;}
    