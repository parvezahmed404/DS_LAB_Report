//11. A. Destroyer (1836A Codeforces )


#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int i, n, x;
        int maximum = 0, f = 0;
        scanf("%d", &n);
        int v[101] = {0};
        for (i = 0; i < n; i++) {
            scanf("%d", &x);
            if (x > maximum) {
                maximum = x;
            }
            v[x]++;
        }
        for (i = 1; i <= maximum; i++) {
            if (v[i - 1] < v[i]) {
                printf("NO\n");
                f = 1;
                break;
            }
        }
        if (f == 0) {
            printf("YES\n");
        }
    }
    return 0;
}