// 31.B. Z mod X = C(1684)
#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        printf("%d %d %d\n", a + b + c, b + c, c);
    }
    return 0;}
    