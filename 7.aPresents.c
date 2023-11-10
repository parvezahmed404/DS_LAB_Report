//7. A. Presents (136A Codeforces )

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
 
    int pi[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &pi[i]);
    }
 
    int gifts[100];
    for (int i = 0; i < n; i++) {
        gifts[pi[i] - 1] = i + 1;
    }
 
    for (int i = 0; i < n; i++) {
        printf("%d ", gifts[i]);
    }
    printf("\n");
    return 0;
}