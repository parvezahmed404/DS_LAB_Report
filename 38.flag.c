// 38. A. Flag(16)

#include <stdio.h>
int main() {
    int flag = 0, n, m;
    char matrix[110][110];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", matrix[i]);
 
        for (int j = 0; j < m; j++) {
            if (j > 0 && matrix[i][j] != matrix[i][j - 1]) {
                flag = 1;
            }
        }
        if (i > 0 && matrix[i][0] == matrix[i - 1][0]) {
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
 return 0;}
 