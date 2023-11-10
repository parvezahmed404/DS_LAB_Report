//15. B. Come Together(1845)

#include <stdio.h>
#include <stdlib.h>
#define MAXN 105
void solve() {
    int ax, ay, bx, by, cx, cy;
    scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);
    int ans = 1;
    if ((bx < ax && cx < ax) || (bx > ax && cx > ax)) {
        ans += abs(bx - ax) < abs(cx - ax) ? abs(bx - ax) : abs(cx - ax);
    }
    if ((by < ay && cy < ay) || (by > ay && cy > ay)) {
        ans += abs(by - ay) < abs(cy - ay) ? abs(by - ay) : abs(cy - ay);
    }
    printf("%d\n", ans);
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}