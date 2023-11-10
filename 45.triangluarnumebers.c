// 45. A. Triangular numbers(47)
#include <stdio.h>
int main() {
    int n, t = 0;
    scanf("%d", &n);
    for(int i = 1; t < n; i++)
    t += i;
    if(n == t) printf("YES");
    else printf("NO");
    return 0;}

    