// 5. A. New Palindrome (1832A Codeforces )
#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[100];
        scanf("%s", s);       
        int len = strlen(s);
        s[len / 2] = '\0';       
        int k = 1;
        for (int i = 1; i < len / 2; i++) {
            if (s[i] != s[i - 1]) {
                k = 0;
                break;
            }}
        printf("%s\n", (k == 1 ? "NO" : "YES"));
    }
    return 0;
}