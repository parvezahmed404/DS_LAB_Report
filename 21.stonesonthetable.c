// 21. A. Stones on the Table(266)

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    char s[1001];
    scanf("%s", s);
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;}
