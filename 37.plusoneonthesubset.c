// 37. A. Plus One on the Subset(1624)
#include <stdio.h>
int main() {
    int t,a[50];;
    scanf("%d", &t);
    while (t--) {
        int n, max = 1, min = 1e9;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", a + i);
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("%d\n", max - min);
    }
    return 0;}
