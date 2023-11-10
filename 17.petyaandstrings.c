// 17. A. Petya and Strings (112)

#include <stdio.h>
#include <ctype.h>
int main() {
    char str1[101], str2[101];
    scanf("%100s", str1);
    scanf("%100s", str2);
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        char ch1 = toupper(str1[i]);
        char ch2 = toupper(str2[i]);
        if (ch1 < ch2) {
            printf("-1");
            return 0;
        } else if (ch1 > ch2) {
            printf("1");
            return 0;
        }
        i++;
    }
    printf("0");
    return 0;}