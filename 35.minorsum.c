// 35. A. Min Or Sum(1635)
#include <stdio.h>
int main() {
    int t, a[101], n, i;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);      
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);            
            if (i > 0) {
                a[i] = a[i - 1] | a[i];
            }
        }
        printf("%d\n", a[i - 1]);
    } return 0;}