// 34. A. Lucky?(1676)

#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char a[10000];
        scanf("%s", a);
        int k = a[0] + a[1] + a[2];
        int l = a[3] + a[4] + a[5];
        printf((k == l) ? "YES\n" : "NO\n");
    }
    return 0;}
    