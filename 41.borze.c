// 41. B. Borze(32)
#include<stdio.h>
int main() {
    char s[201];
    scanf("%s", s);
    for (int i = 0; s[i]; i++) {
        if (s[i] == '.') {
            printf("0");
        } else {
            if (s[++i] == '.') {
                printf("1");
            } else {
                printf("2");
            }}}
 return 0;}


 