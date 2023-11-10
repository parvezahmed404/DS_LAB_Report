// 48. A. Word(59)
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char s[101];
    int i, c = 0;
    fgets(s, sizeof(s), stdin); s[strcspn(s, "\n")] = '\0';
    for (i = 0; i < strlen(s); i++) if (s[i] >= 'A' && s[i] <= 'Z') c++;
    printf("%s", c > strlen(s) / 2 ? strupr(s) : strlwr(s));
    return 0;}
    