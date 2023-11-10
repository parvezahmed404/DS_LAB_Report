// 39. A. Second Order Statistics(22)

#include <stdio.h>
int main() {
    int n, min = 101, min1 = 101, arr[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < min) {
            min1 = min;
            min = arr[i];
        } else if (arr[i] < min1 && arr[i] != min)  min1 = arr[i];}
    if (min1 != 101) printf("%d", min1);
    else printf("NO");
    return 0;}
