//10. A. Beautiful Matrix (263A Codeforces )


#include <stdio.h>
#include <stdlib.h>
int main() {
    int matrix[5][5];
    int targetRow = 2, targetCol = 2;
    int moves = 0;
 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1) {
                moves = abs(i - targetRow) + abs(j - targetCol);
            }
        }
    }
    printf("%d\n", moves);
    return 0;
}