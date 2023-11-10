// 4. A. Politics (1818A Codeforces )
#include <stdio.h>
#include <string.h>
 
#define MAX_SIZE 1000
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
 
        char s[MAX_SIZE][MAX_SIZE];
        for (int i = 0; i < n; i++) {
            scanf("%s", s[i]);
        }
 
        int ans = 1;
 
        for (int j = 1; j < n; j++) {
            if (strcmp(s[j], s[0]) == 0) {
                ans++;
            }
        }
 
        printf("%d\n", ans);
    }
 
    return 0;
}