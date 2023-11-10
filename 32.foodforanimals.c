// 32. A. Food for Animals(1675)

#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, c, x, y;
        scanf("%d%d%d%d%d", &a, &b, &c, &x, &y);
        printf((x - a <= c && y - b <= c && x + y - a - b <= c) ? "YES\n" : "NO\n");
    }
    return 0;}
    