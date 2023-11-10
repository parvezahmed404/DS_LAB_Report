// 26. A. Password Check(411)


#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[101];
    scanf("%s", str);
    int len = strlen(str), c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < len; i++) {
        if (islower(str[i])) c1++;
        else if (isupper(str[i])) c2++;
        else if (isdigit(str[i])) c3++;
    }
    if (c1 >= 1 && c2 >= 1 && c3 >= 1 && len >= 5) printf("Correct\n");
    else printf("Too weak\n");
return 0;}
