// 33. A. Division?(1669)
#include <stdio.h>
int main() {
    int t, r, x;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &r);
        if (r >= 1900) x = 1;
        else if (r >= 1600) x = 2;
        else if (r >= 1400) x = 3;
        else x = 4;
        printf("Division %d\n", x);
    }
    return 0;}

