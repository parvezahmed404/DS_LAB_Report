//16. A. Forbidden Integer(1845A)
#include <stdio.h>
#include <stdlib.h>
#define ll long long
void solve() {
    ll n, k, x;
    scanf("%lld %lld %lld", &n, &k, &x);
    if (x != 1) {
        printf("YES\n");
        printf("%lld\n", n);
        for (int i = 1; i < n + 1; i++) {
            printf("1 ");
        }
        printf("\n");
        return;
    }
    if (n == 1 || k <= 1) {
        printf("NO\n");
        return;
    }
    if (n % 2 == 0) {
        printf("YES\n");
        printf("%lld\n", n / 2);
        for (int i = 1; i <= n / 2; i++) {
            printf("2 ");
        }
        printf("\n");
        return;
    }
    if (k > 2) {
        printf("YES\n");
        printf("%lld\n", (n - 3) / 2 + 1);
        for (int i = 1; i <= (n - 3) / 2; i++) {
            printf("2 ");
        }
        printf("3\n");
        return;
    }
    printf("NO\n");
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}