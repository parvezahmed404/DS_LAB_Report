// 40. A. Reconnaissance(32)
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, d, ans = 0,arr[1001];
    scanf("%d %d", &n, &d);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(arr[j] - arr[i]) <= d)
                ans += 2;
        }
    } printf("%d", ans);
return 0;}


